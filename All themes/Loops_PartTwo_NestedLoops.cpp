// Loops_PartTwo_NestedLoops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
/*

		TASK01 - Afterman's room
*/
	int number, magicIndex, magicNumber;

	do
	{
		cout << "Please add even number of block: ";
		cin >> number;
	} while (number % 2 != 0);

	magicIndex = number / 2;

	int first = 0, second = 1, temp;
	if (magicIndex == 0)
		return first;
	for (int i = 2; i <= magicIndex; i++)
	{
		temp = first + second;
		first = second;
		second = temp;
	}
	magicNumber = second;
	cout << "Afterman is in " << magicNumber << "th room! " << endl;

/*
			TASK02 - Afterman's powers
*/
	
	int n;
	cin >> n;
	for(int i = 0; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			continue;
		}
		else
		{
			cout << pow(2, i) << endl;
		}	
	}
/*
			TASK03 - Afterman in action
			chess board |#| - black , |_| - white
*/
	int size;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
		  ((i + j) % 2 == 0) ? cout << "|#|" : cout << "|_|";
		}
		cout << "\n";
	}

}

