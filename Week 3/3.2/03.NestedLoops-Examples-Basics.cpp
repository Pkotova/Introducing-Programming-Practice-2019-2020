#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
//---------------------------------
//for + for
	for (int i = 0; i < 5; i++)
	{
		for(int j = 0;  j < 5; j++)
		{
			//cout << i << endl;
		}
	}
//---------------------------------
//while + while
	int i = 0, j = 0;
	while (i <= 10)
	{
		while (j < 10)
		{
			j++;
		}
		i++;
	}
//---------------------------------
// break, continue (there is one, all of)
	int number;
	for (int i = 0; i < 10; i++)
	{
		cin >> number;
		if (number % 3 == 0)
		{
			break; // left the loop if you enter number % 3 == 0
		}
	}
//---------------------------------
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
		{
			continue;  // skip all even numbers and print odds
		}
		else
		{
			cout << i << endl;
		}
	}
//---------------------------------
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j == 3)  //skip the iteration j = 3
			{
				break;
			}
			else
			{
				cout << i << endl;
			}
		}
	}
//---------------------------------
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (j == 3)  //skip the iteration j = 3
			{
				goto label; //dont use it often! use break instead, just to know it exist!
			}
			else
			{
				cout << i << endl;
			}
		}
	}
	label:; // goto sends you here, or anywhere you want 
}

    
