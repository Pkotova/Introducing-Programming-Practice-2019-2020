#include "pch.h"
#include<iostream>
using namespace std;

int main()
{
	// TASK 01
	
	long long ID;
	int drinks;
	double height;
	
	cout << "Enter your ID: ";
	cin >> ID;
	
	cout << "How many drinks can you prepare for 10mins? ";
	cin >> drinks;
	
	cout << "How tall are you (in metres)? ";
	cin >> height;
	
	int gender;
	gender = (ID / 10) % 10;

	cout << "Gender: ";
	if (gender % 2 == 0)
	{
		cout << " Male" << endl;
		
		if (drinks >= 3)
		{
			if(height > 1.75)
				cout << "You are highered as a waiter!" << endl;
			else
				cout << "You are highered as a barman!" << endl;
		}
		else
			cout << "Thanks for applying" << endl;
	}
	
	else
	{
		cout << " Female" << endl;
		
		if (height > 1.6)
		{
			if(drinks >= 3)
				cout << "You are highered as a waitress!" << endl;
			else
				cout << "You are highered as a dancer!" << endl;
		}
		else
			cout << "Thanks for applying" << endl;
	}
	cout << endl;
	
	// TASK 02
	
	int price;
	
	cout << "What's the total price of the shots? ";
	cin >> price;

	cout << "There are even number of shots on the";
	(price % 2 == 0) ? cout << " red "
										: cout << " blue ";
	cout << "plate." << endl;
	cout << endl;
	
	// TASK 03
	
	int day, month, daysLeft;
	
	cout << "Enter the day: ";
	cin >> day;
	
	cout << "Enter the month: ";
	cin >> month;

	if (month < 1 || month > 12)
	{
		cout << "There is no such month" << endl;
	}
	else if (day < 1 || day > 31 || (month == 2 && day >= 29) || ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30))
	{
		cout << "There is no such day" << endl;
	}
	else
	{
		switch (month)
		{
			case 1: daysLeft = 7 * 31 + 28 + 4 * 30 - day; break;
			case 2: daysLeft = 6 * 31 + 4 * 30 + 28 - day; break;
			case 3: daysLeft = 6 * 31 + 4 * 30 - day; break;
			case 4: daysLeft = 5 * 31 + 4 * 30 - day; break;
			case 5: daysLeft = 5 * 31 + 3 * 30 - day; break;
			case 6: daysLeft = 4 * 31 + 3 * 30 - day; break;
			case 7: daysLeft = 4 * 31 + 2 * 30 - day; break;
			case 8: daysLeft = 3 * 31 + 2 * 30 - day; break;
			case 9: daysLeft = 2 * 31 + 2 * 30 - day; break;
			case 10: daysLeft = 2 * 31 + 30 - day; break;
			case 11: daysLeft = 31 + 30 - day; break;
			case 12: daysLeft = 31 - day;
		}
		cout << "There are " << daysLeft << " days left  till New Year!" << endl;
	}
}
