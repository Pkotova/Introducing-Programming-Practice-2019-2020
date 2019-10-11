#include "pch.h"
#include <iostream>
using namespace std;

int main()
{

/*
		TASK 01: JEDI
*/
	int jediPower, oddPower = 0, power = 0, members = 3;

	for (int i = 0; i < members; i++)
	{
		cout << i + 1 << " Jedi: ";			
		cin >> jediPower;
		if (jediPower < 0)
		{
			cout << "Invalid input! Please try again! ";
			cin >> jediPower;
		}

		if (jediPower % 2 != 0)				// sum odd points
		{
			oddPower += jediPower;
		}		

		if (jediPower > 20)					// if the points are more than 20
		{
			jediPower += oddPower;			//add sum of odd points
		}

		power += jediPower;					//calculating team's power
	}
	cout << "Team power: " << power << endl;
//-----------------------------------------------------

/*
		TASK 02: Closest planet
*/
	int distance, minDistance, n;

	cout << "How many planets: ";
	cin >> n;
	if (n < 0)
	{
		cout << "Invalid input! Please try again! ";
		cin >> n;
	}

	cout << "1. Planet: ";
	cin >> distance;
	if (distance < 0)
	{
		cout << "Invalid input! Please try again! ";
		cin >> distance;
	}

	minDistance = distance;

	for (int i = 0; i < n - 1; i++)
	{
		cout << i + 2 << ". Planet: ";
		cin >> distance;
		if (distance < 0)
		{
			cout << "Invalid input! Please try again! ";
			cin >> distance;
		}

		if (minDistance > distance)
		{
			minDistance = distance;
		}

	}

	cout << "Closest distance is: " << minDistance << endl;
//-----------------------------------------------------

/*
		TASK 03: My New iPhone11
*/
	double price, priceDDS,payment,sum = 0, months = 0;
	cout << "iPhone11 price: ";
	cin >> price;
	if (price <= 0)
	{
		cout << "Invalid input! Please try again! ";
		cin >> price;
	}
	priceDDS = (price * 0.2) + price;

	while (sum < priceDDS)
	{
		cout << "Payment: ";
		cin >> payment;
		if (payment <= 0)
		{
			cout << "Invalid input! Please try again! ";
			cin >> payment;
		}

		months++;
		sum += payment;
	}

	cout << "For " << months << " months. " << endl;
}

