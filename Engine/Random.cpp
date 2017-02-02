#include "Random.h"

Random::Random():
	rng( rd() ),
	xDist( 0.0f,770.0f ),
	yDist( 46.0f,570.0f ),
	vDist( -1.0f,1.0f ),
	fracDist( 0.0f,1.0f )
{
}

float Random::GenXPos()
{
	return xDist( rng );
}

float Random::GenYPos()
{
	return yDist( rng );
}

float Random::GenFrac()
{
	return fracDist( rng );
}

bool Random::CoinFlip()
{
	return fracDist( rng ) <= 0.5f;
}

bool Random::BiasFlip( float percent )
{
	return fracDist( rng ) <= percent / 100;
}

std::mt19937& Random::GetRNG()
{
	return rng;
}
