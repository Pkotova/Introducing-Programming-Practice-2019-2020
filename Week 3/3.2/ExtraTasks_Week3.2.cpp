// ExtraTasks_Week3.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
/*
		TASK01 - Afterman's path
*/

//	cout << "      ***   PLAZZA   ***" << endl;

	//left - right
	for (int i = 6; i > 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
			cout << " ";
		cout << "***\n";
	}

	//right - left
	for (int row = 1; row <= 6; ++row)
	{

		for (int j = 1; j <= row; ++j)
		{
			cout << " ";
		}
		for (int col = 1; col <= 3; ++col)
		{
			cout << "*" << "";
		}
		cout << endl;
	}

	//copy-paste left-right
	for (int i = 6; i > 0; i--)
	{
		for (int j = 0; j < i - 1; j++)
			cout << " ";
		cout << "***\n";
	}
	cout << "***   BLOKA   ***" << endl;

/*
		TASK01 - Afterman's sleeping zzzzzzz
*/
	cout << endl << endl;
	int height; 
	cout << "Height: " << endl;
	cin >> height;

	for (int i = 0; i <= height; i++)
	{
		for (int j = 0; j <= height; j++)
		{
			(i == height || (i + j) == height || i == 0) ? cout << "z" : cout << " ";
		}
		cout << " " << endl;
	}
}


