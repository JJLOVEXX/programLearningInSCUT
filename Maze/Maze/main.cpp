// Maze(step 1).cpp: �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "Maze.h"
using namespace std;

int main()
{
	char fname[64];

	cout << "Maze File: ";
	cin >> fname;
	if (LoadMaze(fname))
		SolveMaze();

	return 0;
}



