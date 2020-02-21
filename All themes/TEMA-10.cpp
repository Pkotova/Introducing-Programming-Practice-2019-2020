#include <iostream>
using namespace std;
//TASK 1 IS IN MAIN
//TASK 2 IS IN MAIN
//TASK 3
void input(double arr[], int n)
{
	for (int i = 0; i < n; i++)
		cin >> arr[i];
}

double recur(double arr[], int n)
{
	if (n < 2)
		return 0;
	if (arr[n - 2] >= 0 && arr[n - 1] < arr[n - 2])
		return arr[n - 2] + recur(arr, n - 1);
	return recur(arr, n - 1);
}

int main()
{
	//task1-----------------------------------------------------------------
	int number;
	int histogram[100];
	do
	{
		cout << "How long will the array be [1; 100]: ";
		cin >> number;
	} while (number < 1 || number>100);
	
	cout << "Please, enter DIGITS ONLY(0-9)" << endl;
	for (int i = 0; i < number; i++)
	{
		do
		{
			cin >> histogram[i];
		} while (histogram[i] < 0 || histogram[i] > 9);
	}

	for (int i = 0; i < 9; i++)//redove
	{
		for (int j = 0; j < number; j++)//koloni
		{
			if (9 - i > histogram[j])
				cout << " ";
			else
				cout << "*";
			cout << " ";
		}
		cout << endl;
	}

	for (int i = 0; i < number; i++)
	{
		cout << histogram[i] << " ";
	}
	cout << endl;
	
	//task2-------------------------------------
	int len1, len2;
	char first[200], second[200];
	bool flag = true;
	
	cout << "How long will the first word be?(up to 200) ";
	do
	{
		cin >> len1;
		if (!cin)
		{
			cout << "Wrong input!";
			return 1;
		}
	} while (len1 < 1 || len1>200);
	
	cout << "Enter the first word: ";
	cin.get();
	cin.getline(first, len1 + 1);
	
	cout << "How long will the second word be?(up to 200) ";
	do
	{
		cin >> len2;
		if (!cin)
		{
			cout << "Wrong input!";
			return 1;
		}
	} while (len2 < 1 || len2>200);
	
	cout << "Enter the second word: ";
	cin.get();
	cin.getline(second, len2 + 1);
	
	for (int i = 0; i < len1; i++)
	{
		for (int j = 0; j < len2; j++)
		{
			if (first[i] == second[j])
			{
				second[j] = 0;
				break;
			}
		}
	}
	
	for (int i = 0; i < len2; i++)
	{
		if (second[i] != 0)
		{
			flag = false;
			break;
		}
	}
	
	if (flag)
		cout << "You can make the second word from the first one!";
	else
		cout << "You can NOT make the second word from the first one!";
	cout << endl;
	
	//task3-------------------------------------
	double arr[128];
	int number;
	cout << "How many numbers will you enter? ";
	cin >> number;
	input(arr, number);
	double sum=recur(arr, number);
	cout << "The sum of all positive number bigger than their right sitting is " << sum << endl;
	system("pause");
    return 0;
}


