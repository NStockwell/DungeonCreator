#ifndef DUNGEONTILE_H
#define DUNGEONTILE_H

#include <iostream>

using namespace std;

typedef	enum
	{
		INVALID = -1,
		WALL = 0,
		CLEAR,
		TILE_TYPE_COUNT
	}TileType;

class DungeonTile
{


public:
	DungeonTile(int x, int y, TileType tt);
	int getX();
	int getY();
	
	TileType getType();
	
	void setType(TileType type);
	void print();

private:
	int mX;
	int mY;
	TileType mType;
};

#endif