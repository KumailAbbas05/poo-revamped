#pragma once

#include "Graphics.h"
#include <cmath>

class Meter
{
	static constexpr Color BG_COLOUR = Colors::Blue;
	static constexpr Color METER_COLOUR = Colors::Cyan;
	static constexpr float WIDTH = 200;
	static constexpr int GIRTH = 12;
	static constexpr int SCALE = 4;
	static constexpr int MAX_LVL = 13;

	float points = 0.0f;
	float levelPoints = 10.0f;
	float base = 1.0f;
	bool justLeveled = false;

public:
	void Draw( int x,int y,Graphics& gfx ) const;

	float GetPoints() const;
	void AddPoints( float amt );
	bool JustLeveled();
	void SetLevelPoints( float levelPoints );
	float GetLevelPoints() const;
};
