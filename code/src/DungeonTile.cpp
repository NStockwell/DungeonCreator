
#include "DungeonTile.h"


DungeonTile::DungeonTile(int x, int y, TileType tt)
{
	mX = x;
	mY = y; 
	mType = tt;
}


int DungeonTile::getX()
{
	return mX;
}

int DungeonTile::getY()
{
	return mY;
}

TileType DungeonTile::getType()
{
	return mType;
}
void DungeonTile::setType(TileType type)
{
	mType = type;
}

void DungeonTile::print()
{
	switch (mType)
	{
		case TileType::CLEAR:
		{
			cout << ".";
			break;
		}
		case TileType::WALL:
		{
			cout << "@";
			break;
		}
		default:
			break;
	}
}