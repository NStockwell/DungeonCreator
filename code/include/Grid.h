#ifndef GRID_H
#define GRID_H

#include <vector>
#include "DungeonTile.h"
#include <iostream>

using namespace std;



class Grid
{
public:
	Grid(int width, int height);
	void print();
	int getWidth();
	int getHeight();
	void setTileType(int x, int y, TileType newType);

private:
	int mWidth;
	int mHeight;
	vector<vector<DungeonTile>> mTiles;
};

#endif