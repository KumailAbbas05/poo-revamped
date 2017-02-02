#pragma once

#include <random>

class Random
{
	std::random_device rd;
	std::mt19937 rng;
	std::uniform_real_distribution<float> xDist;
	std::uniform_real_distribution<float> yDist;
	std::uniform_real_distribution<float> vDist;
	std::uniform_real_distribution<float> fracDist;

public:
	Random();

	float GenXPos();
	float GenYPos();
	float GenFrac();
	
	bool CoinFlip();
	bool BiasFlip( float percent );

	std::mt19937& GetRNG();
};

