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
	~Grid();
	void print();
	int getWidth();
	int getHeight();
	void setTileType(int x, int y, TileType newType);
	TileType getTileType(int x, int y);

private:
	
	FILE *mFile;
	int mWidth;
	int mHeight;
	vector<vector<DungeonTile>> mTiles;
};

#endif