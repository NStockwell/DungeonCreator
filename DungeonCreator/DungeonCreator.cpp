// DungeonCreator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

#include "Grid.h"

using namespace std;

void print();



int _tmain(int argc, char* argv[])
{
	Grid mGrid = Grid(25,25);
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
