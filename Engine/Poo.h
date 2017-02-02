#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vec2.h"

class Poo
{
	static constexpr float WIDTH = 24.0f;
	static constexpr float HEIGHT = 24.0f;

	Vec2 pos;
	Vec2 vel;
	bool initialized = false;

public:
	static constexpr float NORM_SPEED = 180.0f;
	static constexpr float FAST_SPEED = 360.0f;
	void Init( const Vec2& position,const Vec2& direction,float speed );
	void Update( float dt );
	bool TestCollision( const Dude& dude ) const;
	void Draw( Graphics& gfx ) const;
};
