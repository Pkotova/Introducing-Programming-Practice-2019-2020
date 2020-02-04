//#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	/*
	//task1
	const int MAX_N = 100;
	int arr[MAX_N], n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << "Grets's: ";
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;
	cout << "Mother's: ";
	for (int i = 0; i < n; i++)
	{
		if (i % 2 != 0)
		{
			cout << arr[i] << " ";
		}
	}
	cout << endl;

	//task2
	int numbers[MAX_N];
	bool areElementsUnique = true;

	int n;
	cin >> n;
	while (n < 1 || n > MAX_N) 
	{
		cout << "Enter number in range";
		cin >> n;
	}

	for (int i = 0; i < n; i++) 
	{
		cin >> numbers[i];
	}

	for (int i = 0; i < n; i++) 
	{
		for (int j = i + 1; j < n; j++) 
		{
			if (numbers[i] == numbers[j]) 
			{
				areElementsUnique = false;
				break;
			}
		}
		if (!areElementsUnique) 
		{
			break;
		}
	}

	cout << boolalpha << areElementsUnique << endl;

	//task3
	const int MAX_N = 100, MAX_M = 100;

	int M[MAX_N][MAX_M], TM[MAX_N][MAX_M];
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> M[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			TM[j][i] = M[i][j];
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << TM[i][j] << " ";
		}
		cout << endl;
	}

	//task4
	int matrix[MAX_N][MAX_N];
	int n;
	cin >> n;

	while (n < 0 || n > MAX_N) 
	{
		cout << "Enter number in range" << endl;
		cin >> n;
	}

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			cin >> matrix[i][j];
		}
	}
	int sumAboveDiagonal = 0;
	int sumUnderDiagonal = 0;
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			if (j > i) 
			{
				sumAboveDiagonal += matrix[i][j];
			}
			else if (j < i) 
			{ // if we use only else we will involve the main diagonal
				sumUnderDiagonal += matrix[i][j];
			}
		}
	}

	cout << "Sum over diagonal : " << sumAboveDiagonal << endl;
	cout << "Sum under diagonal : " << sumUnderDiagonal;

	//task5
	int n;
	cin >> n;
	while (n < 1 || n > 50) 
	{
		cout << "Enter number in range" << endl;
		cin >> n;
	}

	int numbers[50];
	double sum = 0.0;

	for (int i = 0; i < n; i++) 
	{
		cin >> numbers[i];
	}

	for (int i = 0; i < n; i++) 
	{
		sum += numbers[i];
	}

	double average = sum / n;

	double minDiff = abs(numbers[0] - average);
	int closestToAverage = numbers[0];

	for (int i = 1; i < n; i++) {
		int currDiff = abs(numbers[i] - average);

		if (currDiff < minDiff) 
		{
			minDiff = currDiff;
			closestToAverage = numbers[i];
		}
	}

	int lowerThanAverage[50];
	int lowerIndex = 0;
	int greaterThanAverage[50];
	int greaterIndex = 0;

	for (int i = 0; i < n; i++) {
		if (numbers[i] > average) {
			greaterThanAverage[greaterIndex++] = numbers[i];
		}
		else if (numbers[i] < average) 
		{
			lowerThanAverage[lowerIndex++] = numbers[i];
		}
		else continue;
	}

	cout << "The number closest to average is: " << closestToAverage << endl;

	cout << "The numbers smaller than average are: ";
	for (int i = 0; i < lowerIndex; i++) 
	{
		cout << lowerThanAverage[i] << " ";
	}
	cout << endl;

	cout << "The numbers greater than average are: ";
	for (int i = 0; i < greaterIndex; i++) 
	{
		cout << greaterThanAverage[i] << " ";
	}
	cout << endl;
	*/
	return 0;
}
