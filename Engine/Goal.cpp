#include "Goal.h"
#include "SpriteCodex.h"

void Goal::DrawCoin( int x_int,int y_int,Graphics& gfx ) const
{
	gfx.PutPixel( x_int + 0,y_int + 7,COLOUR2 );
	gfx.PutPixel( x_int + 0,y_int + 8,COLOUR2 );
	gfx.PutPixel( x_int + 0,y_int + 9,COLOUR2 );
	gfx.PutPixel( x_int + 0,y_int + 10,COLOUR2 );
	gfx.PutPixel( x_int + 0,y_int + 11,COLOUR2 );
	gfx.PutPixel( x_int + 0,y_int + 12,COLOUR2 );
	gfx.PutPixel( x_int + 1,y_int + 5,COLOUR2 );
	gfx.PutPixel( x_int + 1,y_int + 6,COLOUR2 );
	gfx.PutPixel( x_int + 1,y_int + 7,colour );
	gfx.PutPixel( x_int + 1,y_int + 8,colour );
	gfx.PutPixel( x_int + 1,y_int + 9,colour );
	gfx.PutPixel( x_int + 1,y_int + 10,colour );
	gfx.PutPixel( x_int + 1,y_int + 11,colour );
	gfx.PutPixel( x_int + 1,y_int + 12,colour );
	gfx.PutPixel( x_int + 1,y_int + 13,COLOUR2 );
	gfx.PutPixel( x_int + 1,y_int + 14,COLOUR2 );
	gfx.PutPixel( x_int + 2,y_int + 4,COLOUR2 );
	gfx.PutPixel( x_int + 2,y_int + 5,colour );
	gfx.PutPixel( x_int + 2,y_int + 6,colour );
	gfx.PutPixel( x_int + 2,y_int + 7,colour );
	gfx.PutPixel( x_int + 2,y_int + 8,colour );
	gfx.PutPixel( x_int + 2,y_int + 9,colour );
	gfx.PutPixel( x_int + 2,y_int + 10,colour );
	gfx.PutPixel( x_int + 2,y_int + 11,colour );
	gfx.PutPixel( x_int + 2,y_int + 12,colour );
	gfx.PutPixel( x_int + 2,y_int + 13,colour );
	gfx.PutPixel( x_int + 2,y_int + 14,colour );
	gfx.PutPixel( x_int + 2,y_int + 15,COLOUR2 );
	gfx.PutPixel( x_int + 3,y_int + 3,COLOUR2 );
	gfx.PutPixel( x_int + 3,y_int + 4,colour );
	gfx.PutPixel( x_int + 3,y_int + 5,colour );
	gfx.PutPixel( x_int + 3,y_int + 6,colour );
	gfx.PutPixel( x_int + 3,y_int + 7,colour );
	gfx.PutPixel( x_int + 3,y_int + 8,colour );
	gfx.PutPixel( x_int + 3,y_int + 9,colour );
	gfx.PutPixel( x_int + 3,y_int + 10,colour );
	gfx.PutPixel( x_int + 3,y_int + 11,colour );
	gfx.PutPixel( x_int + 3,y_int + 12,colour );
	gfx.PutPixel( x_int + 3,y_int + 13,colour );
	gfx.PutPixel( x_int + 3,y_int + 14,colour );
	gfx.PutPixel( x_int + 3,y_int + 15,colour );
	gfx.PutPixel( x_int + 3,y_int + 16,COLOUR2 );
	gfx.PutPixel( x_int + 4,y_int + 2,COLOUR2 );
	gfx.PutPixel( x_int + 4,y_int + 3,colour );
	gfx.PutPixel( x_int + 4,y_int + 4,colour );
	gfx.PutPixel( x_int + 4,y_int + 5,colour );
	gfx.PutPixel( x_int + 4,y_int + 6,colour );
	gfx.PutPixel( x_int + 4,y_int + 7,COLOUR2 );
	gfx.PutPixel( x_int + 4,y_int + 8,COLOUR2 );
	gfx.PutPixel( x_int + 4,y_int + 9,COLOUR2 );
	gfx.PutPixel( x_int + 4,y_int + 10,colour );
	gfx.PutPixel( x_int + 4,y_int + 11,colour );
	gfx.PutPixel( x_int + 4,y_int + 12,colour );
	gfx.PutPixel( x_int + 4,y_int + 13,COLOUR2 );
	gfx.PutPixel( x_int + 4,y_int + 14,colour );
	gfx.PutPixel( x_int + 4,y_int + 15,colour );
	gfx.PutPixel( x_int + 4,y_int + 16,colour );
	gfx.PutPixel( x_int + 4,y_int + 17,COLOUR2 );
	gfx.PutPixel( x_int + 5,y_int + 1,COLOUR2 );
	gfx.PutPixel( x_int + 5,y_int + 2,colour );
	gfx.PutPixel( x_int + 5,y_int + 3,colour );
	gfx.PutPixel( x_int + 5,y_int + 4,colour );
	gfx.PutPixel( x_int + 5,y_int + 5,colour );
	gfx.PutPixel( x_int + 5,y_int + 6,COLOUR2 );
	gfx.PutPixel( x_int + 5,y_int + 7,COLOUR2 );
	gfx.PutPixel( x_int + 5,y_int + 8,COLOUR2 );
	gfx.PutPixel( x_int + 5,y_int + 9,COLOUR2 );
	gfx.PutPixel( x_int + 5,y_int + 10,COLOUR2 );
	gfx.PutPixel( x_int + 5,y_int + 11,colour );
	gfx.PutPixel( x_int + 5,y_int + 12,colour );
	gfx.PutPixel( x_int + 5,y_int + 13,colour );
	gfx.PutPixel( x_int + 5,y_int + 14,COLOUR2 );
	gfx.PutPixel( x_int + 5,y_int + 15,colour );
	gfx.PutPixel( x_int + 5,y_int + 16,colour );
	gfx.PutPixel( x_int + 5,y_int + 17,colour );
	gfx.PutPixel( x_int + 5,y_int + 18,COLOUR2 );
	gfx.PutPixel( x_int + 6,y_int + 1,COLOUR2 );
	gfx.PutPixel( x_int + 6,y_int + 2,colour );
	gfx.PutPixel( x_int + 6,y_int + 3,colour );
	gfx.PutPixel( x_int + 6,y_int + 4,colour );
	gfx.PutPixel( x_int + 6,y_int + 5,colour );
	gfx.PutPixel( x_int + 6,y_int + 6,COLOUR2 );
	gfx.PutPixel( x_int + 6,y_int + 7,colour );
	gfx.PutPixel( x_int + 6,y_int + 8,colour );
	gfx.PutPixel( x_int + 6,y_int + 9,colour );
	gfx.PutPixel( x_int + 6,y_int + 10,COLOUR2 );
	gfx.PutPixel( x_int + 6,y_int + 11,colour );
	gfx.PutPixel( x_int + 6,y_int + 12,colour );
	gfx.PutPixel( x_int + 6,y_int + 13,colour );
	gfx.PutPixel( x_int + 6,y_int + 14,COLOUR2 );
	gfx.PutPixel( x_int + 6,y_int + 15,colour );
	gfx.PutPixel( x_int + 6,y_int + 16,colour );
	gfx.PutPixel( x_int + 6,y_int + 17,colour );
	gfx.PutPixel( x_int + 6,y_int + 18,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 0,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 1,colour );
	gfx.PutPixel( x_int + 7,y_int + 2,colour );
	gfx.PutPixel( x_int + 7,y_int + 3,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 4,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 5,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 6,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 7,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 8,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 9,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 10,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 11,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 12,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 13,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 14,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 15,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 16,COLOUR2 );
	gfx.PutPixel( x_int + 7,y_int + 17,colour );
	gfx.PutPixel( x_int + 7,y_int + 18,colour );
	gfx.PutPixel( x_int + 7,y_int + 19,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 0,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 1,colour );
	gfx.PutPixel( x_int + 8,y_int + 2,colour );
	gfx.PutPixel( x_int + 8,y_int + 3,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 4,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 5,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 6,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 7,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 8,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 9,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 10,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 11,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 12,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 13,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 14,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 15,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 16,COLOUR2 );
	gfx.PutPixel( x_int + 8,y_int + 17,colour );
	gfx.PutPixel( x_int + 8,y_int + 18,colour );
	gfx.PutPixel( x_int + 8,y_int + 19,COLOUR2 );
	gfx.PutPixel( x_int + 9,y_int + 0,COLOUR2 );
	gfx.PutPixel( x_int + 9,y_int + 1,colour );
	gfx.PutPixel( x_int + 9,y_int + 2,colour );
	gfx.PutPixel( x_int + 9,y_int + 3,colour );
	gfx.PutPixel( x_int + 9,y_int + 4,colour );
	gfx.PutPixel( x_int + 9,y_int + 5,colour );
	gfx.PutPixel( x_int + 9,y_int + 6,COLOUR2 );
	gfx.PutPixel( x_int + 9,y_int + 7,colour );
	gfx.PutPixel( x_int + 9,y_int + 8,colour );
	gfx.PutPixel( x_int + 9,y_int + 9,colour );
	gfx.PutPixel( x_int + 9,y_int + 10,COLOUR2 );
	gfx.PutPixel( x_int + 9,y_int + 11,colour );
	gfx.PutPixel( x_int + 9,y_int + 12,colour );
	gfx.PutPixel( x_int + 9,y_int + 13,colour );
	gfx.PutPixel( x_int + 9,y_int + 14,COLOUR2 );
	gfx.PutPixel( x_int + 9,y_int + 15,colour );
	gfx.PutPixel( x_int + 9,y_int + 16,colour );
	gfx.PutPixel( x_int + 9,y_int + 17,colour );
	gfx.PutPixel( x_int + 9,y_int + 18,colour );
	gfx.PutPixel( x_int + 9,y_int + 19,COLOUR2 );
	gfx.PutPixel( x_int + 10,y_int + 0,COLOUR2 );
	gfx.PutPixel( x_int + 10,y_int + 1,colour );
	gfx.PutPixel( x_int + 10,y_int + 2,colour );
	gfx.PutPixel( x_int + 10,y_int + 3,colour );
	gfx.PutPixel( x_int + 10,y_int + 4,colour );
	gfx.PutPixel( x_int + 10,y_int + 5,colour );
	gfx.PutPixel( x_int + 10,y_int + 6,COLOUR2 );
	gfx.PutPixel( x_int + 10,y_int + 7,colour );
	gfx.PutPixel( x_int + 10,y_int + 8,colour );
	gfx.PutPixel( x_int + 10,y_int + 9,colour );
	gfx.PutPixel( x_int + 10,y_int + 10,COLOUR2 );
	gfx.PutPixel( x_int + 10,y_int + 11,colour );
	gfx.PutPixel( x_int + 10,y_int + 12,colour );
	gfx.PutPixel( x_int + 10,y_int + 13,colour );
	gfx.PutPixel( x_int + 10,y_int + 14,COLOUR2 );
	gfx.PutPixel( x_int + 10,y_int + 15,colour );
	gfx.PutPixel( x_int + 10,y_int + 16,colour );
	gfx.PutPixel( x_int + 10,y_int + 17,colour );
	gfx.PutPixel( x_int + 10,y_int + 18,colour );
	gfx.PutPixel( x_int + 10,y_int + 19,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 0,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 1,colour );
	gfx.PutPixel( x_int + 11,y_int + 2,colour );
	gfx.PutPixel( x_int + 11,y_int + 3,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 4,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 5,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 6,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 7,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 8,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 9,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 10,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 11,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 12,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 13,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 14,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 15,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 16,COLOUR2 );
	gfx.PutPixel( x_int + 11,y_int + 17,colour );
	gfx.PutPixel( x_int + 11,y_int + 18,colour );
	gfx.PutPixel( x_int + 11,y_int + 19,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 0,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 1,colour );
	gfx.PutPixel( x_int + 12,y_int + 2,colour );
	gfx.PutPixel( x_int + 12,y_int + 3,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 4,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 5,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 6,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 7,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 8,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 9,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 10,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 11,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 12,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 13,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 14,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 15,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 16,COLOUR2 );
	gfx.PutPixel( x_int + 12,y_int + 17,colour );
	gfx.PutPixel( x_int + 12,y_int + 18,colour );
	gfx.PutPixel( x_int + 12,y_int + 19,COLOUR2 );
	gfx.PutPixel( x_int + 13,y_int + 1,COLOUR2 );
	gfx.PutPixel( x_int + 13,y_int + 2,colour );
	gfx.PutPixel( x_int + 13,y_int + 3,colour );
	gfx.PutPixel( x_int + 13,y_int + 4,colour );
	gfx.PutPixel( x_int + 13,y_int + 5,colour );
	gfx.PutPixel( x_int + 13,y_int + 6,COLOUR2 );
	gfx.PutPixel( x_int + 13,y_int + 7,colour );
	gfx.PutPixel( x_int + 13,y_int + 8,colour );
	gfx.PutPixel( x_int + 13,y_int + 9,colour );
	gfx.PutPixel( x_int + 13,y_int + 10,COLOUR2 );
	gfx.PutPixel( x_int + 13,y_int + 11,colour );
	gfx.PutPixel( x_int + 13,y_int + 12,colour );
	gfx.PutPixel( x_int + 13,y_int + 13,colour );
	gfx.PutPixel( x_int + 13,y_int + 14,COLOUR2 );
	gfx.PutPixel( x_int + 13,y_int + 15,colour );
	gfx.PutPixel( x_int + 13,y_int + 16,colour );
	gfx.PutPixel( x_int + 13,y_int + 17,colour );
	gfx.PutPixel( x_int + 13,y_int + 18,COLOUR2 );
	gfx.PutPixel( x_int + 14,y_int + 1,COLOUR2 );
	gfx.PutPixel( x_int + 14,y_int + 2,colour );
	gfx.PutPixel( x_int + 14,y_int + 3,colour );
	gfx.PutPixel( x_int + 14,y_int + 4,colour );
	gfx.PutPixel( x_int + 14,y_int + 5,colour );
	gfx.PutPixel( x_int + 14,y_int + 6,COLOUR2 );
	gfx.PutPixel( x_int + 14,y_int + 7,colour );
	gfx.PutPixel( x_int + 14,y_int + 8,colour );
	gfx.PutPixel( x_int + 14,y_int + 9,colour );
	gfx.PutPixel( x_int + 14,y_int + 10,COLOUR2 );
	gfx.PutPixel( x_int + 14,y_int + 11,COLOUR2 );
	gfx.PutPixel( x_int + 14,y_int + 12,COLOUR2 );
	gfx.PutPixel( x_int + 14,y_int + 13,COLOUR2 );
	gfx.PutPixel( x_int + 14,y_int + 14,COLOUR2 );
	gfx.PutPixel( x_int + 14,y_int + 15,colour );
	gfx.PutPixel( x_int + 14,y_int + 16,colour );
	gfx.PutPixel( x_int + 14,y_int + 17,colour );
	gfx.PutPixel( x_int + 14,y_int + 18,COLOUR2 );
	gfx.PutPixel( x_int + 15,y_int + 2,COLOUR2 );
	gfx.PutPixel( x_int + 15,y_int + 3,colour );
	gfx.PutPixel( x_int + 15,y_int + 4,colour );
	gfx.PutPixel( x_int + 15,y_int + 5,colour );
	gfx.PutPixel( x_int + 15,y_int + 6,colour );
	gfx.PutPixel( x_int + 15,y_int + 7,COLOUR2 );
	gfx.PutPixel( x_int + 15,y_int + 8,colour );
	gfx.PutPixel( x_int + 15,y_int + 9,colour );
	gfx.PutPixel( x_int + 15,y_int + 10,colour );
	gfx.PutPixel( x_int + 15,y_int + 11,COLOUR2 );
	gfx.PutPixel( x_int + 15,y_int + 12,COLOUR2 );
	gfx.PutPixel( x_int + 15,y_int + 13,COLOUR2 );
	gfx.PutPixel( x_int + 15,y_int + 14,colour );
	gfx.PutPixel( x_int + 15,y_int + 15,colour );
	gfx.PutPixel( x_int + 15,y_int + 16,colour );
	gfx.PutPixel( x_int + 15,y_int + 17,COLOUR2 );
	gfx.PutPixel( x_int + 16,y_int + 3,COLOUR2 );
	gfx.PutPixel( x_int + 16,y_int + 4,colour );
	gfx.PutPixel( x_int + 16,y_int + 5,colour );
	gfx.PutPixel( x_int + 16,y_int + 6,colour );
	gfx.PutPixel( x_int + 16,y_int + 7,colour );
	gfx.PutPixel( x_int + 16,y_int + 8,colour );
	gfx.PutPixel( x_int + 16,y_int + 9,colour );
	gfx.PutPixel( x_int + 16,y_int + 10,colour );
	gfx.PutPixel( x_int + 16,y_int + 11,colour );
	gfx.PutPixel( x_int + 16,y_int + 12,colour );
	gfx.PutPixel( x_int + 16,y_int + 13,colour );
	gfx.PutPixel( x_int + 16,y_int + 14,colour );
	gfx.PutPixel( x_int + 16,y_int + 15,colour );
	gfx.PutPixel( x_int + 16,y_int + 16,COLOUR2 );
	gfx.PutPixel( x_int + 17,y_int + 4,COLOUR2 );
	gfx.PutPixel( x_int + 17,y_int + 5,colour );
	gfx.PutPixel( x_int + 17,y_int + 6,colour );
	gfx.PutPixel( x_int + 17,y_int + 7,colour );
	gfx.PutPixel( x_int + 17,y_int + 8,colour );
	gfx.PutPixel( x_int + 17,y_int + 9,colour );
	gfx.PutPixel( x_int + 17,y_int + 10,colour );
	gfx.PutPixel( x_int + 17,y_int + 11,colour );
	gfx.PutPixel( x_int + 17,y_int + 12,colour );
	gfx.PutPixel( x_int + 17,y_int + 13,colour );
	gfx.PutPixel( x_int + 17,y_int + 14,colour );
	gfx.PutPixel( x_int + 17,y_int + 15,COLOUR2 );
	gfx.PutPixel( x_int + 18,y_int + 5,COLOUR2 );
	gfx.PutPixel( x_int + 18,y_int + 6,COLOUR2 );
	gfx.PutPixel( x_int + 18,y_int + 7,colour );
	gfx.PutPixel( x_int + 18,y_int + 8,colour );
	gfx.PutPixel( x_int + 18,y_int + 9,colour );
	gfx.PutPixel( x_int + 18,y_int + 10,colour );
	gfx.PutPixel( x_int + 18,y_int + 11,colour );
	gfx.PutPixel( x_int + 18,y_int + 12,colour );
	gfx.PutPixel( x_int + 18,y_int + 13,COLOUR2 );
	gfx.PutPixel( x_int + 18,y_int + 14,COLOUR2 );
	gfx.PutPixel( x_int + 19,y_int + 7,COLOUR2 );
	gfx.PutPixel( x_int + 19,y_int + 8,COLOUR2 );
	gfx.PutPixel( x_int + 19,y_int + 9,COLOUR2 );
	gfx.PutPixel( x_int + 19,y_int + 10,COLOUR2 );
	gfx.PutPixel( x_int + 19,y_int + 11,COLOUR2 );
	gfx.PutPixel( x_int + 19,y_int + 12,COLOUR2 );
}

Goal::Goal( const Vec2& pos ):
	pos( pos )
{
	colourFactor = COLOURFACTOR_MIN;
	const int rg = int( colourFactor * 255.0f );
	colour = Colors::MakeRGB( unsigned char( rg ),unsigned char( rg ),0 );
	colourIncreasing = true;
}

void Goal::Respawn( const Vec2& pos,Type type )
{
	this->pos = pos;
	this->type = type;
}

bool Goal::TestCollision( const Dude& dude ) const
{
	const float duderight = dude.GetPos().x + dude.GetWidth();
	const float dudebottom = dude.GetPos().y + dude.GetHeight();
	const float pooright = pos.x + SIZE;
	const float poobottom = pos.y + SIZE;

	return
		duderight >= pos.x &&
		dude.GetPos().x <= pooright &&
		dudebottom >= pos.y &&
		dude.GetPos().y <= poobottom;
}

void Goal::UpdateColor( float dt )
{
	if( colourIncreasing )
	{
		colourFactor += STROBE_RATE * dt;
		if( colourFactor > COLOURFACTOR_MAX )
		{
			colourFactor = COLOURFACTOR_MAX;
			colourIncreasing = false;
		}
	}
	else
	{
		colourFactor -= STROBE_RATE * dt;
		if( colourFactor < COLOURFACTOR_MIN )
		{
			colourFactor = COLOURFACTOR_MIN;
			colourIncreasing = true;
		}
	}

	if( colourFactor <= 1.0f )
	{
		const int rg = int( colourFactor * 255.0f );
		colour = Colors::MakeRGB( unsigned char( rg ),unsigned char( rg ),0 );
	}
	else
	{
		const int b = int( (colourFactor - 1) * 255.0f );
		colour = Colors::MakeRGB( 255,255,unsigned char( b ) );
	}
}

void Goal::Draw( Graphics& gfx ) const
{
	const int x_int = int( pos.x );
	const int y_int = int( pos.y );

	switch( type )
	{
	case Type::COIN:
		DrawCoin( x_int,y_int,gfx );
		break;
	case Type::HEART:
		SpriteCodex::DrawHeart( x_int,y_int,gfx );
		break;
	case Type::HALF_HEART:
		SpriteCodex::DrawHalfHeart( x_int,y_int,gfx );
		break;
	case Type::SOUL_HEART:
		SpriteCodex::DrawSoulHeart( x_int,y_int,gfx );
		break;
	case Type::HALF_SOUL_HEART:
		SpriteCodex::DrawHalfSoulHeart( x_int,y_int,gfx );
		break;
	}
}