#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"

class Goal
{
public:
	enum class Type
	{
		COIN = 0,
		HEART = 1,
		HALF_HEART = 2,
		SOUL_HEART = 3,
		HALF_SOUL_HEART = 4
	};

private:
	static constexpr Color COLOUR2 = { 255,127,39 };
	static constexpr float SIZE = 20;
	static constexpr float COLOURFACTOR_MAX = 1.6f;
	static constexpr float COLOURFACTOR_MIN = 0.4f;
	static constexpr float STROBE_RATE = 1.0f;

	Color colour;
	float colourFactor;
	bool colourIncreasing;
	Vec2 pos;
	Type type = Type::COIN;

	void DrawCoin( int x,int y,Graphics& gfx ) const;

public:
	Goal( const Vec2& pos );

	void Respawn( const Vec2& pos, Type type );

	bool TestCollision( const Dude& dude ) const;
	void UpdateColor( float dt );

	void Draw( Graphics& gfx ) const;

	Type GetType() const { return type; }
};