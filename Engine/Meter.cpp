#include "Meter.h"

void Meter::Draw( int x,int y,Graphics& gfx ) const
{
	gfx.DrawRectDim( x,y,int( WIDTH ),GIRTH,BG_COLOUR );
	gfx.DrawRectDim( x,y,int( points / levelPoints * WIDTH ),GIRTH,METER_COLOUR );
}

float Meter::GetPoints() const
{
	return points;
}

void Meter::AddPoints( float amt )
{
	points += amt;
	if( points >= levelPoints )
	{
		points -= levelPoints;
		justLeveled = true;
	}
}

bool Meter::JustLeveled()
{
	if( justLeveled )
	{
		justLeveled = false;
		return true;
	}
	return false;
}

void Meter::SetLevelPoints( float levelPoints )
{
	this->levelPoints = levelPoints;
}

float Meter::GetLevelPoints() const
{
	return levelPoints;
}
