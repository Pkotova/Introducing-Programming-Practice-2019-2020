#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// TASK 04
	int a, b, c;
	int D;
	double x1, x2;

	cout << "Input the coefficients for ax^2 + bx + c = 0" << endl;
	cin >> a >> b >> c;

	if (a == 0) 
	{
		cout << "The solution is x = " << (double) -c / b << endl; // parse the result to double
	}
	else 
	{
		D = b * b - (4 * a * c);

		if (D < 0) 
		{
			cout << "There is no solution." << endl;
		}
		else 
		{
			x1 = (-b + sqrt(D)) / (2 * a);
			x2 = (-b - sqrt(D)) / (2 * a);

			x1 == x2 ? cout << "The solution is x = " << x1 << endl
					 : cout << "The solutions are x1 = " << x1 << " and " << "x2 = " << x2 << endl;
		}
	}
}
