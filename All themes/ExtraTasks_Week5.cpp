// ExtraTasks_Week5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

/*
	TASK01- Likes
*/

void statistics(int numberOfPhotos)
{
	int photos[500], indexAvrLiked = -1, sumLikes = 0, averageLikes = 0;

	for (int i = 0; i < numberOfPhotos; i++)
	{
		cout << "Likes of pic: " << i + 1 << " :";
		cin >> photos[i];
		sumLikes += photos[i];
	}

	averageLikes = (sumLikes / 5);

	for (int i = 0; i < numberOfPhotos - 1; i++)
	{
		for (int j = 0; j < numberOfPhotos - i - 1; j++)
		{

			if (photos[j] < photos[j + 1])
			{
				swap(photos[j], photos[j + 1]);
			}
		}
	}
		
	for (int i = 0; i < numberOfPhotos; i++)
	{
		cout << i + 1 <<": "<<photos[i] << endl;
	}

	for (int i = 0; i < numberOfPhotos; i++)
	{
		if (photos[i] == averageLikes)
		{
			indexAvrLiked = i;
			break;
		}
	}

	(indexAvrLiked == -1) 
		? cout << "The photo with average likes is: There is no such photo" << endl
	    : cout << "The photo with average likes is: " << indexAvrLiked << endl;
}
int main()
{
	statistics(5);
}


