#include "Dude.h"
#include "Graphics.h"
#include "SpriteCodex.h"

void Dude::Timers( float dt )
{
	if( invincible )
	{
		invincibleTimer -= dt;
		if( invincibleTimer <= 0.0f )
		{
			invincible = false;
			flashingOff = false;
			return;
		}

		invincibleFlashTimer += dt;
		if( invincibleFlashTimer >= INVINCIBLE_FLASH_PERIOD )
		{
			invincibleFlashTimer -= INVINCIBLE_FLASH_PERIOD;
			flashingOff = !flashingOff;
		}
	}
}

void Dude::ClampToScreen()
{
	const float right = pos.x + WIDTH;
	if( pos.x < 0 )
	{
		pos.x = 0;
	}
	else if( right >= float( Graphics::ScreenWidth ) )
	{
		pos.x = float( Graphics::ScreenWidth - 1 ) - WIDTH;
	}

	const float bottom = pos.y + HEIGHT;
	if( pos.y < 0 )
	{
		pos.y = 0;
	}
	else if( bottom >= float( Graphics::ScreenHeight ) )
	{
		pos.y = float( Graphics::ScreenHeight - 1 ) - HEIGHT;
	}
}

void Dude::Draw( Graphics& gfx ) const
{
	if( !flashingOff )
	{
		const int x_int = int( pos.x );
		const int y_int = int( pos.y );

		gfx.PutPixel( 7 + x_int,0 + y_int,0,0,0 );
		gfx.PutPixel( 8 + x_int,0 + y_int,0,0,0 );
		gfx.PutPixel( 9 + x_int,0 + y_int,0,0,0 );
		gfx.PutPixel( 10 + x_int,0 + y_int,0,0,0 );
		gfx.PutPixel( 11 + x_int,0 + y_int,0,0,0 );
		gfx.PutPixel( 12 + x_int,0 + y_int,0,0,0 );
		gfx.PutPixel( 5 + x_int,1 + y_int,0,0,0 );
		gfx.PutPixel( 6 + x_int,1 + y_int,0,0,0 );
		gfx.PutPixel( 7 + x_int,1 + y_int,254,221,88 );
		gfx.PutPixel( 8 + x_int,1 + y_int,254,221,88 );
		gfx.PutPixel( 9 + x_int,1 + y_int,254,221,88 );
		gfx.PutPixel( 10 + x_int,1 + y_int,254,221,88 );
		gfx.PutPixel( 11 + x_int,1 + y_int,254,221,88 );
		gfx.PutPixel( 12 + x_int,1 + y_int,254,221,88 );
		gfx.PutPixel( 13 + x_int,1 + y_int,0,0,0 );
		gfx.PutPixel( 14 + x_int,1 + y_int,0,0,0 );
		gfx.PutPixel( 3 + x_int,2 + y_int,0,0,0 );
		gfx.PutPixel( 4 + x_int,2 + y_int,0,0,0 );
		gfx.PutPixel( 5 + x_int,2 + y_int,254,221,88 );
		gfx.PutPixel( 6 + x_int,2 + y_int,254,221,88 );
		gfx.PutPixel( 7 + x_int,2 + y_int,254,221,88 );
		gfx.PutPixel( 8 + x_int,2 + y_int,254,221,88 );
		gfx.PutPixel( 9 + x_int,2 + y_int,254,221,88 );
		gfx.PutPixel( 10 + x_int,2 + y_int,254,221,88 );
		gfx.PutPixel( 11 + x_int,2 + y_int,254,221,88 );
		gfx.PutPixel( 12 + x_int,2 + y_int,254,221,88 );
		gfx.PutPixel( 13 + x_int,2 + y_int,254,221,88 );
		gfx.PutPixel( 14 + x_int,2 + y_int,254,221,88 );
		gfx.PutPixel( 15 + x_int,2 + y_int,0,0,0 );
		gfx.PutPixel( 16 + x_int,2 + y_int,0,0,0 );
		gfx.PutPixel( 2 + x_int,3 + y_int,0,0,0 );
		gfx.PutPixel( 3 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 4 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 5 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 6 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 7 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 8 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 9 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 10 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 11 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 12 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 13 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 14 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 15 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 16 + x_int,3 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,3 + y_int,0,0,0 );
		gfx.PutPixel( 2 + x_int,4 + y_int,0,0,0 );
		gfx.PutPixel( 3 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 4 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 5 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 6 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 7 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 8 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 9 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 10 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 11 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 12 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 13 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 14 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 15 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 16 + x_int,4 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,4 + y_int,0,0,0 );
		gfx.PutPixel( 1 + x_int,5 + y_int,0,0,0 );
		gfx.PutPixel( 2 + x_int,5 + y_int,254,221,88 );
		gfx.PutPixel( 3 + x_int,5 + y_int,0,0,0 );
		gfx.PutPixel( 4 + x_int,5 + y_int,0,0,0 );
		gfx.PutPixel( 5 + x_int,5 + y_int,254,221,88 );
		gfx.PutPixel( 6 + x_int,5 + y_int,254,221,88 );
		gfx.PutPixel( 7 + x_int,5 + y_int,254,221,88 );
		gfx.PutPixel( 8 + x_int,5 + y_int,254,221,88 );
		gfx.PutPixel( 9 + x_int,5 + y_int,254,221,88 );
		gfx.PutPixel( 10 + x_int,5 + y_int,254,221,88 );
		gfx.PutPixel( 11 + x_int,5 + y_int,0,0,0 );
		gfx.PutPixel( 12 + x_int,5 + y_int,0,0,0 );
		gfx.PutPixel( 13 + x_int,5 + y_int,0,0,0 );
		gfx.PutPixel( 14 + x_int,5 + y_int,0,0,0 );
		gfx.PutPixel( 15 + x_int,5 + y_int,254,221,88 );
		gfx.PutPixel( 16 + x_int,5 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,5 + y_int,254,221,88 );
		gfx.PutPixel( 18 + x_int,5 + y_int,0,0,0 );
		gfx.PutPixel( 1 + x_int,6 + y_int,0,0,0 );
		gfx.PutPixel( 2 + x_int,6 + y_int,0,0,0 );
		gfx.PutPixel( 3 + x_int,6 + y_int,255,255,255 );
		gfx.PutPixel( 4 + x_int,6 + y_int,0,0,0 );
		gfx.PutPixel( 5 + x_int,6 + y_int,0,0,0 );
		gfx.PutPixel( 6 + x_int,6 + y_int,254,221,88 );
		gfx.PutPixel( 7 + x_int,6 + y_int,254,221,88 );
		gfx.PutPixel( 8 + x_int,6 + y_int,254,221,88 );
		gfx.PutPixel( 9 + x_int,6 + y_int,254,221,88 );
		gfx.PutPixel( 10 + x_int,6 + y_int,0,0,0 );
		gfx.PutPixel( 11 + x_int,6 + y_int,255,255,255 );
		gfx.PutPixel( 12 + x_int,6 + y_int,255,255,255 );
		gfx.PutPixel( 13 + x_int,6 + y_int,0,0,0 );
		gfx.PutPixel( 14 + x_int,6 + y_int,0,0,0 );
		gfx.PutPixel( 15 + x_int,6 + y_int,0,0,0 );
		gfx.PutPixel( 16 + x_int,6 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,6 + y_int,254,221,88 );
		gfx.PutPixel( 18 + x_int,6 + y_int,0,0,0 );
		gfx.PutPixel( 0 + x_int,7 + y_int,0,0,0 );
		gfx.PutPixel( 1 + x_int,7 + y_int,0,0,0 );
		gfx.PutPixel( 2 + x_int,7 + y_int,255,255,255 );
		gfx.PutPixel( 3 + x_int,7 + y_int,255,255,255 );
		gfx.PutPixel( 4 + x_int,7 + y_int,0,0,0 );
		gfx.PutPixel( 5 + x_int,7 + y_int,0,0,0 );
		gfx.PutPixel( 6 + x_int,7 + y_int,254,221,88 );
		gfx.PutPixel( 7 + x_int,7 + y_int,254,221,88 );
		gfx.PutPixel( 8 + x_int,7 + y_int,254,221,88 );
		gfx.PutPixel( 9 + x_int,7 + y_int,254,221,88 );
		gfx.PutPixel( 10 + x_int,7 + y_int,0,0,0 );
		gfx.PutPixel( 11 + x_int,7 + y_int,255,255,255 );
		gfx.PutPixel( 12 + x_int,7 + y_int,255,255,255 );
		gfx.PutPixel( 13 + x_int,7 + y_int,0,0,0 );
		gfx.PutPixel( 14 + x_int,7 + y_int,0,0,0 );
		gfx.PutPixel( 15 + x_int,7 + y_int,0,0,0 );
		gfx.PutPixel( 16 + x_int,7 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,7 + y_int,254,221,88 );
		gfx.PutPixel( 18 + x_int,7 + y_int,254,221,88 );
		gfx.PutPixel( 19 + x_int,7 + y_int,0,0,0 );
		gfx.PutPixel( 0 + x_int,8 + y_int,0,0,0 );
		gfx.PutPixel( 1 + x_int,8 + y_int,0,0,0 );
		gfx.PutPixel( 2 + x_int,8 + y_int,255,255,255 );
		gfx.PutPixel( 3 + x_int,8 + y_int,255,255,255 );
		gfx.PutPixel( 4 + x_int,8 + y_int,255,255,255 );
		gfx.PutPixel( 5 + x_int,8 + y_int,0,0,0 );
		gfx.PutPixel( 6 + x_int,8 + y_int,254,221,88 );
		gfx.PutPixel( 7 + x_int,8 + y_int,254,221,88 );
		gfx.PutPixel( 8 + x_int,8 + y_int,254,221,88 );
		gfx.PutPixel( 9 + x_int,8 + y_int,254,221,88 );
		gfx.PutPixel( 10 + x_int,8 + y_int,0,0,0 );
		gfx.PutPixel( 11 + x_int,8 + y_int,255,255,255 );
		gfx.PutPixel( 12 + x_int,8 + y_int,255,255,255 );
		gfx.PutPixel( 13 + x_int,8 + y_int,255,255,255 );
		gfx.PutPixel( 14 + x_int,8 + y_int,255,255,255 );
		gfx.PutPixel( 15 + x_int,8 + y_int,0,0,0 );
		gfx.PutPixel( 16 + x_int,8 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,8 + y_int,254,221,88 );
		gfx.PutPixel( 18 + x_int,8 + y_int,254,221,88 );
		gfx.PutPixel( 19 + x_int,8 + y_int,0,0,0 );
		gfx.PutPixel( 0 + x_int,9 + y_int,0,0,0 );
		gfx.PutPixel( 1 + x_int,9 + y_int,254,221,88 );
		gfx.PutPixel( 2 + x_int,9 + y_int,0,0,0 );
		gfx.PutPixel( 3 + x_int,9 + y_int,0,0,0 );
		gfx.PutPixel( 4 + x_int,9 + y_int,0,0,0 );
		gfx.PutPixel( 5 + x_int,9 + y_int,0,0,0 );
		gfx.PutPixel( 6 + x_int,9 + y_int,254,221,88 );
		gfx.PutPixel( 7 + x_int,9 + y_int,254,221,88 );
		gfx.PutPixel( 8 + x_int,9 + y_int,254,221,88 );
		gfx.PutPixel( 9 + x_int,9 + y_int,254,221,88 );
		gfx.PutPixel( 10 + x_int,9 + y_int,254,221,88 );
		gfx.PutPixel( 11 + x_int,9 + y_int,0,0,0 );
		gfx.PutPixel( 12 + x_int,9 + y_int,0,0,0 );
		gfx.PutPixel( 13 + x_int,9 + y_int,0,0,0 );
		gfx.PutPixel( 14 + x_int,9 + y_int,0,0,0 );
		gfx.PutPixel( 15 + x_int,9 + y_int,254,221,88 );
		gfx.PutPixel( 16 + x_int,9 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,9 + y_int,254,221,88 );
		gfx.PutPixel( 18 + x_int,9 + y_int,254,221,88 );
		gfx.PutPixel( 19 + x_int,9 + y_int,0,0,0 );
		gfx.PutPixel( 0 + x_int,10 + y_int,0,0,0 );
		gfx.PutPixel( 1 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 2 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 3 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 4 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 5 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 6 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 7 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 8 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 9 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 10 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 11 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 12 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 13 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 14 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 15 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 16 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 18 + x_int,10 + y_int,254,221,88 );
		gfx.PutPixel( 19 + x_int,10 + y_int,0,0,0 );
		gfx.PutPixel( 0 + x_int,11 + y_int,0,0,0 );
		gfx.PutPixel( 1 + x_int,11 + y_int,254,221,88 );
		gfx.PutPixel( 2 + x_int,11 + y_int,254,221,88 );
		gfx.PutPixel( 3 + x_int,11 + y_int,254,221,88 );
		gfx.PutPixel( 4 + x_int,11 + y_int,254,221,88 );
		gfx.PutPixel( 5 + x_int,11 + y_int,254,221,88 );
		gfx.PutPixel( 6 + x_int,11 + y_int,254,221,88 );
		gfx.PutPixel( 7 + x_int,11 + y_int,20,14,18 );
		gfx.PutPixel( 8 + x_int,11 + y_int,18,11,14 );
		gfx.PutPixel( 9 + x_int,11 + y_int,18,12,14 );
		gfx.PutPixel( 10 + x_int,11 + y_int,18,12,14 );
		gfx.PutPixel( 11 + x_int,11 + y_int,21,13,16 );
		gfx.PutPixel( 12 + x_int,11 + y_int,24,11,15 );
		gfx.PutPixel( 13 + x_int,11 + y_int,0,0,0 );
		gfx.PutPixel( 14 + x_int,11 + y_int,254,221,88 );
		gfx.PutPixel( 15 + x_int,11 + y_int,254,221,88 );
		gfx.PutPixel( 16 + x_int,11 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,11 + y_int,254,221,88 );
		gfx.PutPixel( 18 + x_int,11 + y_int,254,221,88 );
		gfx.PutPixel( 19 + x_int,11 + y_int,0,0,0 );
		gfx.PutPixel( 0 + x_int,12 + y_int,0,0,0 );
		gfx.PutPixel( 1 + x_int,12 + y_int,254,221,88 );
		gfx.PutPixel( 2 + x_int,12 + y_int,254,221,88 );
		gfx.PutPixel( 3 + x_int,12 + y_int,254,221,88 );
		gfx.PutPixel( 4 + x_int,12 + y_int,254,221,88 );
		gfx.PutPixel( 5 + x_int,12 + y_int,254,221,88 );
		gfx.PutPixel( 6 + x_int,12 + y_int,23,9,23 );
		gfx.PutPixel( 7 + x_int,12 + y_int,135,26,68 );
		gfx.PutPixel( 8 + x_int,12 + y_int,135,26,68 );
		gfx.PutPixel( 9 + x_int,12 + y_int,135,26,68 );
		gfx.PutPixel( 10 + x_int,12 + y_int,135,26,68 );
		gfx.PutPixel( 11 + x_int,12 + y_int,135,26,68 );
		gfx.PutPixel( 12 + x_int,12 + y_int,135,26,68 );
		gfx.PutPixel( 13 + x_int,12 + y_int,135,26,68 );
		gfx.PutPixel( 14 + x_int,12 + y_int,0,0,0 );
		gfx.PutPixel( 15 + x_int,12 + y_int,254,221,88 );
		gfx.PutPixel( 16 + x_int,12 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,12 + y_int,254,221,88 );
		gfx.PutPixel( 18 + x_int,12 + y_int,254,221,88 );
		gfx.PutPixel( 19 + x_int,12 + y_int,0,0,0 );
		gfx.PutPixel( 1 + x_int,13 + y_int,0,0,0 );
		gfx.PutPixel( 2 + x_int,13 + y_int,254,221,88 );
		gfx.PutPixel( 3 + x_int,13 + y_int,254,221,88 );
		gfx.PutPixel( 4 + x_int,13 + y_int,254,221,88 );
		gfx.PutPixel( 5 + x_int,13 + y_int,0,0,0 );
		gfx.PutPixel( 6 + x_int,13 + y_int,135,26,68 );
		gfx.PutPixel( 7 + x_int,13 + y_int,135,26,68 );
		gfx.PutPixel( 8 + x_int,13 + y_int,135,26,68 );
		gfx.PutPixel( 9 + x_int,13 + y_int,135,26,68 );
		gfx.PutPixel( 10 + x_int,13 + y_int,135,26,68 );
		gfx.PutPixel( 11 + x_int,13 + y_int,135,26,68 );
		gfx.PutPixel( 12 + x_int,13 + y_int,135,26,68 );
		gfx.PutPixel( 13 + x_int,13 + y_int,135,26,68 );
		gfx.PutPixel( 14 + x_int,13 + y_int,135,26,68 );
		gfx.PutPixel( 15 + x_int,13 + y_int,0,0,0 );
		gfx.PutPixel( 16 + x_int,13 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,13 + y_int,254,221,88 );
		gfx.PutPixel( 18 + x_int,13 + y_int,0,0,0 );
		gfx.PutPixel( 1 + x_int,14 + y_int,0,0,0 );
		gfx.PutPixel( 2 + x_int,14 + y_int,254,221,88 );
		gfx.PutPixel( 3 + x_int,14 + y_int,254,221,88 );
		gfx.PutPixel( 4 + x_int,14 + y_int,0,0,0 );
		gfx.PutPixel( 5 + x_int,14 + y_int,135,26,68 );
		gfx.PutPixel( 6 + x_int,14 + y_int,135,26,68 );
		gfx.PutPixel( 7 + x_int,14 + y_int,135,26,68 );
		gfx.PutPixel( 8 + x_int,14 + y_int,135,26,68 );
		gfx.PutPixel( 9 + x_int,14 + y_int,251,192,224 );
		gfx.PutPixel( 10 + x_int,14 + y_int,251,192,224 );
		gfx.PutPixel( 11 + x_int,14 + y_int,251,192,224 );
		gfx.PutPixel( 12 + x_int,14 + y_int,251,192,224 );
		gfx.PutPixel( 13 + x_int,14 + y_int,135,26,68 );
		gfx.PutPixel( 14 + x_int,14 + y_int,135,26,68 );
		gfx.PutPixel( 15 + x_int,14 + y_int,0,0,0 );
		gfx.PutPixel( 16 + x_int,14 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,14 + y_int,254,221,88 );
		gfx.PutPixel( 18 + x_int,14 + y_int,0,0,0 );
		gfx.PutPixel( 2 + x_int,15 + y_int,0,0,0 );
		gfx.PutPixel( 3 + x_int,15 + y_int,254,221,88 );
		gfx.PutPixel( 4 + x_int,15 + y_int,0,0,0 );
		gfx.PutPixel( 5 + x_int,15 + y_int,135,26,68 );
		gfx.PutPixel( 6 + x_int,15 + y_int,135,26,68 );
		gfx.PutPixel( 7 + x_int,15 + y_int,135,26,68 );
		gfx.PutPixel( 8 + x_int,15 + y_int,251,192,224 );
		gfx.PutPixel( 9 + x_int,15 + y_int,251,192,224 );
		gfx.PutPixel( 10 + x_int,15 + y_int,251,192,224 );
		gfx.PutPixel( 11 + x_int,15 + y_int,251,192,224 );
		gfx.PutPixel( 12 + x_int,15 + y_int,251,192,224 );
		gfx.PutPixel( 13 + x_int,15 + y_int,251,192,224 );
		gfx.PutPixel( 14 + x_int,15 + y_int,135,26,68 );
		gfx.PutPixel( 15 + x_int,15 + y_int,0,0,0 );
		gfx.PutPixel( 16 + x_int,15 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,15 + y_int,0,0,0 );
		gfx.PutPixel( 2 + x_int,16 + y_int,0,0,0 );
		gfx.PutPixel( 3 + x_int,16 + y_int,254,221,88 );
		gfx.PutPixel( 4 + x_int,16 + y_int,0,0,0 );
		gfx.PutPixel( 5 + x_int,16 + y_int,135,26,68 );
		gfx.PutPixel( 6 + x_int,16 + y_int,135,26,68 );
		gfx.PutPixel( 7 + x_int,16 + y_int,135,26,68 );
		gfx.PutPixel( 8 + x_int,16 + y_int,251,192,224 );
		gfx.PutPixel( 9 + x_int,16 + y_int,251,192,224 );
		gfx.PutPixel( 10 + x_int,16 + y_int,251,192,224 );
		gfx.PutPixel( 11 + x_int,16 + y_int,251,192,224 );
		gfx.PutPixel( 12 + x_int,16 + y_int,251,192,224 );
		gfx.PutPixel( 13 + x_int,16 + y_int,251,192,224 );
		gfx.PutPixel( 14 + x_int,16 + y_int,135,26,68 );
		gfx.PutPixel( 15 + x_int,16 + y_int,0,0,0 );
		gfx.PutPixel( 16 + x_int,16 + y_int,254,221,88 );
		gfx.PutPixel( 17 + x_int,16 + y_int,0,0,0 );
		gfx.PutPixel( 3 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 4 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 5 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 6 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 7 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 8 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 9 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 10 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 11 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 12 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 13 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 14 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 15 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 16 + x_int,17 + y_int,0,0,0 );
		gfx.PutPixel( 5 + x_int,18 + y_int,0,0,0 );
		gfx.PutPixel( 6 + x_int,18 + y_int,0,0,0 );
		gfx.PutPixel( 7 + x_int,18 + y_int,254,221,88 );
		gfx.PutPixel( 8 + x_int,18 + y_int,254,221,88 );
		gfx.PutPixel( 9 + x_int,18 + y_int,254,221,88 );
		gfx.PutPixel( 10 + x_int,18 + y_int,254,221,88 );
		gfx.PutPixel( 11 + x_int,18 + y_int,254,221,88 );
		gfx.PutPixel( 12 + x_int,18 + y_int,254,221,88 );
		gfx.PutPixel( 13 + x_int,18 + y_int,0,0,0 );
		gfx.PutPixel( 14 + x_int,18 + y_int,0,0,0 );
		gfx.PutPixel( 7 + x_int,19 + y_int,0,0,0 );
		gfx.PutPixel( 8 + x_int,19 + y_int,0,0,0 );
		gfx.PutPixel( 9 + x_int,19 + y_int,0,0,0 );
		gfx.PutPixel( 10 + x_int,19 + y_int,0,0,0 );
		gfx.PutPixel( 11 + x_int,19 + y_int,0,0,0 );
		gfx.PutPixel( 12 + x_int,19 + y_int,0,0,0 );
	}
}

void Dude::DrawHealth( int x,int y,Graphics& gfx ) const
{
	int i;
	for( i = 0; i < health / 2; ++i )
	{
		SpriteCodex::DrawHeart( i * 29 + x,y,gfx );
	}

	if( i < maxHearts )
	{
		if( health % 2 == 1 )
		{
			SpriteCodex::DrawHalfHeart( i * 29 + x,y,gfx );
			++i;
		}
	}

	while( i < maxHearts )
	{
		SpriteCodex::DrawEmptyHeart( i * 29 + x,y,gfx );
		++i;
	}

	if( soul > 0 )
	{
		for( ; i < maxHearts + soul / 2; ++i )
		{
			SpriteCodex::DrawSoulHeart( i * 29 + x,y,gfx );
		}

		if( soul % 2 == 1 )
		{
			SpriteCodex::DrawHalfSoulHeart( i * 29 + x,y,gfx );
		}
	}
}

void Dude::Update( const Keyboard& kbd,float dt )
{
	Vec2 vel( 0.0f,0.0f );
	if( kbd.KeyIsPressed( VK_RIGHT ) )
	{
		vel.x += 1.0f;
	}
	if( kbd.KeyIsPressed( VK_LEFT ) )
	{
		vel.x -= 1.0f;
	}
	if( kbd.KeyIsPressed( VK_DOWN ) )
	{
		vel.y += 1.0f;
	}
	if( kbd.KeyIsPressed( VK_UP ) )
	{
		vel.y -= 1.0f;
	}
	pos += vel.GetNormalized() * SPEED * dt;

	Timers( dt );
}

void Dude::Update( const Mouse& mouse,float dt )
{
	if( mouse.LeftIsPressed() )
	{
		const Vec2 center = pos + Vec2( float( WIDTH ) / 2.0f,float( HEIGHT ) / 2.0f );
		const Vec2 toPointer = Vec2( float( mouse.GetPosX() ),float( mouse.GetPosY() ) ) - center;
		// dead zone radius = sqrt( 2 )
		if( toPointer.GetLengthSq() > 2.0f )
		{
			pos += toPointer.GetNormalized() * SPEED * dt;
		}
	}
	Timers( dt );
}

void Dude::Hurt( int dmg )
{
	if( !invincible )
	{
		if( soul > 0 )
		{
			soul = (soul - dmg) < 0 ? 0 : soul - dmg;
		}
		else
		{
			health -= dmg;
			if( health <= 0 )
			{
				dead = true;
			}
		}

		invincibleTimer = INVINCIBLE_TIME;
		invincible = true;
	}
}

void Dude::Heal( int amt )
{
	health += amt;
	if( health > maxHearts * 2 )
	{
		health = maxHearts * 2;
	}
}

void Dude::GiveSoul( int amt )
{
	soul += amt;
	int x = 1;
}

Vec2 Dude::GetPos() const
{
	return pos;
}

float Dude::GetWidth() const
{
	return WIDTH;
}

float Dude::GetHeight() const
{
	return HEIGHT;
}

bool Dude::IsAtFullHealth() const
{
	return health == maxHearts * 2;
}

bool Dude::IsDead() const
{
	return dead;
}
