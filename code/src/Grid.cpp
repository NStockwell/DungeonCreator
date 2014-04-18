#include "Grid.h"

Grid::Grid(int width, int height)
{
	mWidth = width;
	mHeight = height;
	for(int i = 0; i < width; i++)
	{
		vector<DungeonTile> vDT;
		for(int j = 0; j < height; j++)
		{
			DungeonTile dTile = DungeonTile(i,j,TileType::CLEAR);
			if(i == 1)
				dTile.setType(TileType::WALL);
			vDT.push_back(dTile);
		}
		mTiles.push_back(vDT);
	}
}


void Grid::print()
{
	cout << "Printing current state of Grid:\n   ";
	for(int i = 0; i < mWidth; i++)
	{
		cout << i;
		if(i < 10)
			cout << " ";
	}
	cout << "\n";
	for(int i = 0; i < mWidth; i++)
	{
		cout << i;
		if(i < 10)
			cout << " ";
		
			cout << " ";
		vector<DungeonTile> vDT = mTiles.at(i);
		for(int j = 0; j < mHeight; j++)
		{
			DungeonTile dTile = vDT.at(j);
			dTile.print();
			cout << " ";
		}
		cout << "\n";
	}
	cout << "\n\n\n";
}
