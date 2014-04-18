// DungeonCreator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Grid.h"

using namespace std;

void print();

void translate(Grid *g,  char* byteArray);


int _tmain(int argc, char* argv[])
{
	Grid mGrid = Grid(25,25);
	mGrid.print();
	
	translate(&mGrid,"Hello! Is it me you're looking for? I can see it in your eyes I can see it in your smile");

	mGrid.print();

	while(1)
	{
	//	print();
	}
	return 0;
}


void print()
{
	cout << "Hello World";
}


void translate(Grid *g,  char* byteArray)
{
	int index = 0;
	int byteArrayIndex = 0;
	char currentByte = byteArray[0];

	while(currentByte != '\0')
	{
		int mask = 1;
		for(int i = 0; i < 8; i++)
		{
			index = 8*byteArrayIndex + i;
			int gridX = (int)(index % g->getWidth());
			int gridY = (int)(index / g->getWidth());
			
			if(index >= g->getWidth()*g->getHeight())
				return;
			if(mask & currentByte)
			{
				g->setTileType(gridX, gridY, TileType::WALL);
			}
			mask = mask << 1;
		}
		currentByte = byteArray[++byteArrayIndex];
	}
}