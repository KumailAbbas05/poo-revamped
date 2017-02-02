/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
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
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "Poo.h"
#include "Dude.h"
#include "Goal.h"
#include "Meter.h"
#include "SoundEffect.h"
#include "FrameTimer.h"
#include "Levels.h"

#include "Random.h"
#include "Clock.h"

class Game
{
	static constexpr int MAX_POOS = 100;
	static constexpr float POO_SPAWN_PERIOD = 0.5f;
	
	MainWindow& wnd;
	Graphics gfx;

	/********************************/
	/*  User Variables              */
	FrameTimer ft;
	Random rand;
	TickClock pooSpawnClock;

	Dude dude;
	Goal goal;
	Meter meter;
	Poo poos[MAX_POOS];

	Sound title = Sound( L"Sounds\\title.wav" );
	Sound lvlUpSound = Sound( L"Sounds\\lvlUp.wav" );
	Sound gameOver = Sound( L"Sounds\\gameOver.wav" );
	SoundEffect pickupCoin = SoundEffect( { L"Sounds\\coin.wav" } );
	SoundEffect fart = SoundEffect( 
		{ L"Sounds\\fart1.wav",L"Sounds\\fart2.wav" } );
	SoundEffect pickupHeart = SoundEffect( { L"Sounds\\heart.wav" } );
	SoundEffect pickupSoulHeart =  SoundEffect( { L"Sounds\\soulHeart.wav" } );

	int nPoo = 0;
	bool poosSpawning = true;
	int poosToSpawn = 5;
	int fastPoosToSpawn = 0;

	int level = 0;
	bool isStarted = false;
	bool isGameOver = false;
	/********************************/

	void ComposeFrame();
	void UpdateModel();

	/********************************/
	/*  User Functions              */
	void SpawnPoo( float speed );
	Goal::Type ChooseGoalType();
	void GoalEffect( Goal::Type type );
	/********************************/

public:
	Game( class MainWindow& wnd );

	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;

	void Go()
	{
		gfx.BeginFrame();
		UpdateModel();
		ComposeFrame();
		gfx.EndFrame();
	}
};