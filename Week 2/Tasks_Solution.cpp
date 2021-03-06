// Tasks_Solution.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// Task 01
	int a, b, c;
	
	cout << "Enter side a: ";
	cin >> a;
	cout << "Enter side b: ";
	cin >> b;
	cout << "Enter side c: ";
	cin >> c;
	
	if (a + b < c || b + c < a || c + a < b || a <= 0 || b <= 0 || c <= 0)
	{
		cout << "You are denied!" << endl;
	}
	else if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
	{
		cout << "Right-angled family" << endl;
	}
	else if (a * a + b * b > c * c)
	{
		cout << "Acute-angled family" << endl;
	}
	else
	{
		cout << "Obtuse family" << endl;
	}
	cout << endl;

	// Task 02
	int personsYears;
	double illumPoints;
	
	cout << "How old are you? ";
	cin >> personsYears;

	if (personsYears <= 0)
	{
		cout << "You are removed from this Order!" << endl;
	}
	else if (personsYears <= 18)
	{
		illumPoints = personsYears * 3;
		cout << "Your points are " << illumPoints << endl;
	}
	else if (personsYears <= 65)
	{
		illumPoints = 18 * 3 + (personsYears - 18) * 5;
		cout << "Your points are " << illumPoints << endl;
	}
	else
	{
		illumPoints = 5000;
		cout << "Your points are " << illumPoints << endl;
	}
	cout << endl;
	
	// Task 03
	int firstValue, secondValue;
	char symbol;
	
	cout << "Enter a value, an operation and a value" << endl;
	cin >> firstValue >> symbol >> secondValue;

	switch (symbol)
	{
	case '+': cout << firstValue + secondValue << endl; break;
	case '-': cout << firstValue - secondValue << endl; break;
	case '*': cout << firstValue * secondValue << endl; break;
	case '/': cout << (double)firstValue / secondValue << endl; break;
	case '%': cout << firstValue % secondValue << endl; break;
	case '^': cout << pow(firstValue, secondValue) << endl; break;
	case '=': cout << boolalpha << (firstValue == secondValue) << endl; break;
	default: cout << "Error! The operator was not recognised." << endl;
	}
}