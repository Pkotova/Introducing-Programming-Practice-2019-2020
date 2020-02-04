#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
/*
		TASK01: Figures' Areas
*/
	double area;
//Square:
	double sideA;
	cout << "a = ";
	cin >> sideA;
	area = sideA * sideA; // or area = pow(sideA,2);  //in milimetres
	cout << "Square's area: " << (area / 10) << endl;

//Triangle:
	double sideAC, sideCB, sideAB, halfPerimeter;
	cout << "a = ";
	cin >> sideCB;
	cout << "b = ";
	cin >> sideAC;
	cout << "c = ";
	cin >> sideAB;
	halfPerimeter = (sideAC + sideAB + sideAB) / 2;
	area = sqrt(halfPerimeter * (halfPerimeter - sideAB) * (halfPerimeter - sideAC) * (halfPerimeter - sideCB)); //milimetres
	cout << "Tringale's area: " << (area / 10) << endl;

//Parallelogram
	double diagAC, diagBD, angleAOB;
	cout << "Diagonal AC = ";
	cin >> diagAC;
	cout << " Diagonal BD = ";
	cin >> diagBD;
	cout << "Angle AOB = ";
	cin >> angleAOB;
	area = (diagAC * diagBD * sin(angleAOB * 3.14159 / 180)) / 2; //milimetres
	cout << "sin angle: " << sin(angleAOB * 3.14159 / 180) << endl;
	cout << "Parallelogram's area: " << (area / 10) << endl;
	cout << endl;
// ------------------------------------------------------------------//


/*
			TASK02: Currency Calculator
*/
	double money;
	cout << "How much money do you have: ";
	cin >> money;
// BGN
	cout << "You have " << money << " BGN." << endl;
//Czech korunas
	cout << "You have " << money / 7.54681 << " Czech korunas. " << endl;
//Hungary forints
	cout << "You have " << money / 5.85648 << " Hungary forints. " << endl;
//Mexican pesos
	cout << "You have " << money / 9.10031 << " Mexican pesos. " << endl;
	cout << endl;
// ------------------------------------------------------------------//



/*
			TASK03: Temperature Calculator
*/
	double temperature;
	cout << "Temperature: ";
	cin >> temperature;

//Celsius to Fahrenheit
	cout << "Celsius to Fahrenheit - " << ((temperature * 1.8) + 32) << endl;
//Fahrenheit to Celsius
	cout << "Fahrenheit to Celsius - " << ((temperature - 32) / 1.8) << endl;
//Celsius to Kelvin
	cout << "Celsius to Kelvin - " << (temperature + 273.15) << endl;
//Kelvin to Celsius
	cout << "Kelvin to Celsius - " << (temperature - 273.15) << endl;
}