#pragma once

#include "Graphics.h"

class SpriteCodex
{
public:
	static void DrawPlanetChiliPresents( int x,int y,Graphics& gfx );
	static void DrawGameOver( int x,int y,Graphics& gfx );
	static void DrawTitle( int x,int y,Graphics& gfx );
	static void DrawLevelUp( int x,int y,Graphics& gfx );
	static void DrawHeart( int x,int y,Graphics& gfx );
	static void DrawHalfHeart( int x,int y,Graphics& gfx );
	static void DrawEmptyHeart( int x,int y,Graphics& gfx );
	static void DrawSoulHeart( int x,int y,Graphics& gfx );
	static void DrawHalfSoulHeart( int x,int y,Graphics& gfx );
};