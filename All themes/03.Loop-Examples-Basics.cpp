// 03.Loop-Examples-Basics.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
 /*
			Numbers from 1 to 10
 */

//for-loop
	for(int i = 1; i <= 10; i++)
	{
		cout << i << " ";
	}

	cout << endl;

//do-while-loop
	int i = 1;
	do
	{
		cout << i << " ";
		i++;
	} while (i <= 10);

	cout << endl;

//while - loop
	int j = 1;
	while (j <= 10)
	{
		cout << j << " ";
		j++;
	}

//endless loop
/*	while (true)
	{
		cout << "FMI <3";
	}
*/

/*
		factoriel
*/
	cout << endl;

//for-loop
	int factoriel = 1;
	for (int i = 1; i <= 5; i++)
	{
		factoriel *= i;
	}
	cout << factoriel << endl;
//do-while-loop
	int fact = 1, k = 1;
	do
	{
		fact *= k;
		k++;
	} while (k <= 5);
	cout << fact << endl;
//while-loop

	int factor = 1, p = 1;
	while (p <= 5)
	{
		factor *= p;
		p++;
	}
	cout << factor << endl;

/*
		if in loops
*/
//for-loop
	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
//do-while
	int m = 1;
	do
	{
		if ((m * m) % 2 == 0)
		{
			cout << m * m<< " ";
		}
		m++;
	} while (m <= 20);

	cout << endl;

//while 
	int n = 1;
	while (n  <= 20)
	{
		(n % 3 == 0) ? cout << n << " " : cout << 0;
		n++;
	}

}
