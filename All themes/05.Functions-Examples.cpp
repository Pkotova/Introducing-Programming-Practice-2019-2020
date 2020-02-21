// 05.Functions-Examples.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//sum of two numbers
int sum(int a, int b)
{
	return a + b;
}

//is even
bool isEven(int a)
{
	return (a % 2 == 0);
}

//reverse
int reverse(int a)
{
	int temp, reverse = 0;
	if (a > 0 && a < 10)
	{
		cout << a;
	}
	else
	{
		while (a != 0)
		{
			temp = a % 10;
			//cout << temp << endl; // change to void
			reverse = reverse * 10 + temp;
			a /= 10;
		}
	}
	return reverse;
}

int main()
{
	cout << sum(3423, 233) << endl;
	cout << boolalpha << isEven(5) << endl;
	cout << reverse(394) << endl;
}

