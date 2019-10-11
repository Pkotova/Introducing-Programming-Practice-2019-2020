// ExtraTasks_Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
/*
			TASK01: MAGICS
*/
		//	Редът на елементите няма значение, тук – в какъв ред се раздават картите.Избираме
		//		2 от 20 карти по начина.
		// Комбинация на n - елемента от k-ти клас
		//- Всички k - елементни подмножества на множеството от n елемента, за които редът на
		//	елементите не е от значение.
		// С = n! / (n-k)!.k!

		long long int ways, nFactoriel = 1, kFactoriel = 1, nkFactoriel = 1;
		int n = 20, k = 2;

		for (int i = 1; i <= n; i++)			//n!
		{
			nFactoriel *= i;
		}
		cout << "n! " << nFactoriel << endl;
		for (int i = 1; i <= k; i++)			//k!
		{
			kFactoriel *= i;
		}
		for (int i = 1; i <= (n - k); i++)		//(n-k)!
		{
			nkFactoriel *= i;
		}

		cout << "All ways: " << nFactoriel / ((nkFactoriel)* kFactoriel) << endl;
//--------------------------------------------------------------
/*
			TASK 02: Illusion
*/
		int people;
		char m = 'm', f = 'f', sex;		
		bool result = false;

		cout << "How many people on this table: ";
		cin >> people;
		
		int counter = 0;
		do
		{
			cout << "Guest: " << counter + 1 <<" : ";
			cin >> sex;
			if (sex != m && sex != f)
			{
				cout << "Invalid input! Try again! " << endl;
				cin >> sex;
			}
			if (sex == f)
			{
				!result;
				break;									//if there is one girl, we dont need to continue!
			}
			counter++;
		} while (counter < people);

		(result) ? (cout << "They need shisha! " << endl) : (cout <<"THEY DONT DESERVE IT! " << endl);
}
