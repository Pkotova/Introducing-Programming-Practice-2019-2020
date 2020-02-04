// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
/*
	TASK01: Hashtag
*/
double report()
{
	double commission = 0;
	int hashCounter = 0;
	char sequence[10];

	for (int i = 0; i < 10; i++)
	{
		cin >> sequence[i];
		if (sequence[i] == '#')
		{
			commission += (hashCounter * 100);
			hashCounter++;
		}
	}
	return commission;
}

/*
		TASK02 - Stories
*/
int storyTime(int minutes)
{
	int hourOnTheWatch = 0, minutesOnTheWatch = 0;
	if (minutes > 1441)
	{
		cout << "Sorry wrong minutes: " << endl;
		return 0;

	}
	hourOnTheWatch = minutes / 60;
	minutesOnTheWatch = minutes % 60; //îr minutes - hourOnTheWatch*60;

	return hourOnTheWatch;
}
/*
	TASK03 - VIEWERS
*/
int viewers(int hours, int followers)
{
	int views;

	switch (hours)
	{
	case 0: case 2 : case 3 : case 4 : case 5 : case 6: 
	{
		views = followers * 0.2;
		break;
	}
	case 7: case 8: case 9: case 10: case 11: case 12:
	{
		views = followers * 0.4;
		break;
	}
	case 13: case 14: case 15: case 16: case 17:
	{
		views = followers * 0.3;
		break;
	}
	case 18: case 19: case 20: case 21: case 22: case 23:
	{
		views = followers;
		break;
	}
	default:
		cout << "Invalid! " << endl;
		break;
	}
	
	return views;
}
int main()
{
	cout << report() << " BGN" << endl;
	cout << storyTime(1444) << endl;
	cout << viewers(storyTime(1000), 10000) << endl;
}


