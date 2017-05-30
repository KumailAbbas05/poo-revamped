/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include "SpriteCodex.h"
#include <random>

Game::Game( MainWindow& wnd ):
	wnd( wnd ),
	gfx( wnd ),
	goal( Vec2( rand.GenXPos(),rand.GenYPos() ) ),
	pooSpawnClock( POO_SPAWN_PERIOD ),
	planetChiliClock( 1.0f ),
	sndTitle( L"Sounds\\title.wav" ),
	sndLvlUp( L"Sounds\\lvlUp.wav" ),
	sndGameOver( L"Sounds\\gameOver.wav" ),
	sndCoin( {
		L"Sounds\\coin0.wav",
		L"Sounds\\coin1.wav",
		L"Sounds\\coin2.wav",
		L"Sounds\\coin3.wav",
		L"Sounds\\coin4.wav",
		L"Sounds\\coin5.wav",
		L"Sounds\\coin6.wav",
		L"Sounds\\coin7.wav",
		L"Sounds\\coin8.wav",
		L"Sounds\\coin9.wav" } ),
	sndFart( { L"Sounds\\fart1.wav",L"Sounds\\fart2.wav" } ),
	sndHeart( { L"Sounds\\heart.wav" } ),
	sndSoulHeart( { L"Sounds\\soulHeart.wav" } )
{
	planetChiliClock.Start();
}

void Game::UpdateModel()
{
	const float dt = ft.Mark();

	goal.UpdateColor( dt );
	if( isPlanetChiliPresents )
	{
		planetChiliClock.Update( dt );
		if( planetChiliClock.IsDone() )
		{
			++planetChiliPresents;
			if( planetChiliPresents == 1 )
			{
				sndCoin.Play( rand.GetRNG() );
			}
			else if( planetChiliPresents == 3 )
			{
				isPlanetChiliPresents = false;
				sndTitle.Play();
			}
		}
	}
	else if( isStarted && !isGameOver )
	{
		dude.Update( wnd.kbd,dt );
		dude.ClampToScreen();

		if( poosSpawning )
		{
			pooSpawnClock.Update( dt );
			if( pooSpawnClock.IsDone() )
			{
				if( fastPoosToSpawn > 0 )
				{
					if( rand.CoinFlip() && poosToSpawn > 0 )
					{
						--poosToSpawn;
						SpawnPoo( Poo::NORM_SPEED );
					}
					else
					{
						--fastPoosToSpawn;
						SpawnPoo( Poo::FAST_SPEED );
					}
				}
				else if( poosToSpawn > 0 )
				{
					--poosToSpawn;
					SpawnPoo( Poo::NORM_SPEED );
				}
				else
				{
					poosSpawning = false;
					pooSpawnClock.Stop();
				}
			}
		}
		

		for( int i = 0; i < nPoo; ++i )
		{
			poos[i].Update( dt );
			if( poos[ i ].TestCollision( dude ) )
			{
				dude.Hurt( 1 );
			}
		}

		if( goal.TestCollision( dude ) )
		{
			GoalEffect( goal.GetType() );

			Vec2 goalPos;
			do
			{
				goalPos = { rand.GenXPos(),rand.GenYPos() };
			}
			while( (dude.GetPos() - goalPos).GetLengthSq() < 100000.0f );

			goal.Respawn( goalPos,ChooseGoalType() );
		}

		if( meter.JustLeveled() )
		{
			sndLvlUp.Play();
			++level;
			meter.SetLevelPoints( meter.GetLevelPoints() + float( level * 10 ) );

			poosToSpawn += LEVEL_DATA[ level ].poos;
			fastPoosToSpawn += LEVEL_DATA[ level ].fastPoos;
			if( poosToSpawn > 0 || fastPoosToSpawn > 0 )
			{
				poosSpawning = true;
				pooSpawnClock.Start();
			}
		}

		if( dude.IsDead() )
		{
			isGameOver = true;
			sndGameOver.Play();
		}
	}
	else
	{
		if( wnd.kbd.KeyIsPressed( VK_RETURN ) )
		{
			isStarted = true;
			pooSpawnClock.Start();
		}
	}
}

void Game::SpawnPoo( float speed )
{
	Vec2 pooPos;
	do
	{
		pooPos = { rand.GenXPos(),rand.GenYPos() };
	}
	while( (dude.GetPos() - pooPos).GetLengthSq() < 100000.0f );

	poos[ nPoo ].Init( pooPos,Vec2( rand.GenFrac(),rand.GenFrac() ),speed );
	++nPoo;

	sndFart.Play( rand.GetRNG() );
}

Goal::Type Game::ChooseGoalType()
{
	const float num = rand.GenFrac() * 100.0f;
	if( !dude.IsAtFullHealth() )
	{
		if( num <= 5.0f )
		{
			if( num <= 0.25f ) {
				return Goal::Type::SOUL_HEART;
			} else if( num > 0.25f && num <= 0.5f ) {
				return Goal::Type::HALF_SOUL_HEART;
			} else if( num > 0.5f && num <= 1.5f ) {
				return Goal::Type::HEART;
			} else {
				return Goal::Type::HALF_HEART;
			}
		}
		else
		{
			return Goal::Type::COIN;
		}
	}
	else
	{
		if( num <= 0.25f ) {
			return Goal::Type::SOUL_HEART;
		} else if( num > 0.25f && num <= 0.5f ) {
			return Goal::Type::HALF_SOUL_HEART;
		} else {
			return Goal::Type::COIN;
		}
	}
}

void Game::GoalEffect( Goal::Type type )
{
	switch( type )
	{
	case Goal::Type::COIN:
		meter.AddPoints( 2.5f );
		sndCoin.Play( rand.GetRNG() );
		break;
	case Goal::Type::HEART:
		meter.AddPoints( 1.0f );
		dude.Heal( 2 );
		sndHeart.Play( rand.GetRNG() );
		break;
	case Goal::Type::HALF_HEART:
		meter.AddPoints( 1.75f );
		dude.Heal( 1 );
		sndHeart.Play( rand.GetRNG() );
		break;
	case Goal::Type::SOUL_HEART:
		dude.GiveSoul( 2 );
		sndSoulHeart.Play( rand.GetRNG() );
		break;
	case Goal::Type::HALF_SOUL_HEART:
		dude.GiveSoul( 1 );
		sndSoulHeart.Play( rand.GetRNG() );
		break;
	default:
		meter.AddPoints( 13.37f );
	}
}

void Game::ComposeFrame()
{
	if( planetChiliPresents == 1 )
	{
		SpriteCodex::DrawPlanetChiliPresents( 361,290,gfx );
	}
	else if( planetChiliPresents == 3 && !isStarted )
	{
		SpriteCodex::DrawTitle( 325,211,gfx );
	}
	else if( isStarted )
	{
		goal.Draw( gfx );

		for( int i = 0; i < nPoo; ++i )
		{
			poos[i].Draw( gfx );
		}

		dude.Draw( gfx );

		if( isGameOver )
		{
			SpriteCodex::DrawGameOver( 358,268,gfx );
		}

		meter.Draw( 20,20,gfx );
		dude.DrawHealth( 20,37,gfx );
	}
}
