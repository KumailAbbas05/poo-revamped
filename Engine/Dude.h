#pragma once

#include "Graphics.h"
#include "Keyboard.h"
#include "Mouse.h"
#include "Vec2.h"

class Dude
{
	static constexpr float SPEED = 180.0f;
	static constexpr float WIDTH = 20.0f;
	static constexpr float HEIGHT = 20.0f;
	static constexpr float INVINCIBLE_TIME = 3.0f;
	static constexpr float INVINCIBLE_FLASH_PERIOD = 0.1f;

	Vec2 pos = Vec2( 400.0f,300.0f );

	int health = 6;
	int soul = 0;
	int maxHearts = 3;
	bool dead = false;

	float invincibleTimer = 0.0f;
	float invincibleFlashTimer = 0.0f;
	bool invincible = false;
	bool flashingOff = false;

	void Timers( float dt );

public:
	void ClampToScreen();

	void Draw( Graphics& gfx ) const;
	void DrawHealth( int x,int y,Graphics& gfx ) const;

	void Update( const Keyboard& kbd,float dt );
	void Update( const Mouse& mouse,float dt );

	void Hurt( int dmg );
	void Heal( int amt );
	void GiveSoul( int amt );

	Vec2 GetPos() const;
	float GetWidth() const;
	float GetHeight() const;
	bool IsAtFullHealth() const;
	bool IsDead() const;
};