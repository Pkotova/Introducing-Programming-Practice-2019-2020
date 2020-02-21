// ExtraTasks_Week01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
/*
		TASK 01: ZOOCENTER
*/
		double forDogs = ((4.5 * 0.2) + 4.5),			//calculating DDS 20%
			   forParrots = ((3.23 * 0.2) + 3.23),		//calculating DDS 20%
			   forCats = 2.22,
			   forAllAnimals = 0;
		int days = 30;									//october has 30 days

		forDogs *= (0.5 * 30);
		forParrots *= (0.1 * 30);
		forCats *= (0.5 * 30);

		forAllAnimals = forDogs + forParrots + forCats;

		cout << "All amount of money we need is: " << forAllAnimals << " BGN" << endl; 

/*
		TASK 02: PLANTING
*/
		double length, weigth, area, price = ((17.54 * 0.2) + 17.54);

		cout << "Length of the yard: ";
		cin >> length;
		cout << "Weigth of the yard: ";
		cin >> weigth;
		area = length * weigth;			//area of the yard;

		if (area > 100)
		{
			price = (price * area) - 0.4 * (price*area);
		}
		else
		{
			price *= area;
		}	

		cout << "The price is: " << price << endl;
}
