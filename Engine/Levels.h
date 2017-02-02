#pragma once

struct Level
{
	int poos;
	int fastPoos;
	int waves; // Notice this isn't used yet ... but I'll be getting to it.
};


static constexpr int MAX_LEVEL = 10;
static constexpr Level LEVEL_DATA[ MAX_LEVEL + 1 ] = {
	{ 5,0,0 },
	{ 3,0,0 },
	{ 3,1,0 },
	{ 3,0,0 },
	{ 3,1,0 },
	{ 5,0,3 },
	{ 7,0,0 },
	{ 4,0,0 },
	{ 4,1,0 },
	{ 4,0,0 },
	{ 7,0,3 }
};