#include "Clock.h"

Clock::Clock( float time_in )
	:
	time( time_in )
{
}

void Clock::Update( float dt )
{
	if( running )
	{
		timer += dt;
		if( timer >= time )
		{
			done = true;
			running = false;
		}
	}
}

void Clock::Start()
{
	if( !running )
	{
		running = true;
		timer = 0.0f;
	}
}

void Clock::Stop()
{
	if( running )
	{
		running = false;
		timer = 0.0f;
	}
}

void Clock::Restart()
{
	timer = 0.0f;
	done = false;
	running = true;
}

bool Clock::IsDone()
{
	if( done )
	{
		done = false;
		return true;
	}
	return done;
}

// TickClock

TickClock::TickClock( float time )
	:
	Clock( time )
{
}

void TickClock::Update( float dt )
{
	if( running )
	{
		timer += dt;
		if( timer >= time )
		{
			timer -= time;
			done = true;
		}
	}
}
