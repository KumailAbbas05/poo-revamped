#pragma once

class Clock
{
protected:
	float timer = 0.0f;
	float time;
	bool done = false;
	bool running = false;

public:
	Clock( float time );
	void Update( float dt );
	void Start();
	void Stop();
	void Restart();
	bool IsDone();
};

class TickClock:
	public Clock
{
public:
	TickClock( float time );
	void Update( float dt );
};