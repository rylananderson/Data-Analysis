//*****************************************************************************************************
//
//		File:			DataAnalysis1.cpp
//		
//		Student:		Rylan Andeson
//
//		Assignment:	 	Program #2
//
//		Course Name:    Programming II 
//
//		Course Number:  COSC 1560 - 01
//
//		Due:			September 17, 2021
//
//
//		Description
//			This program takes in data entered by user and sorts it using bubble sort. 
//		
//		
//
//		Other files required: 
//			1.	none
//			 
//		
//*****************************************************************************************************

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//*****************************************************************************************************

void getAllData(double*, int);
void displayAllValue(const double*, int);
double calcSum(const double*, int);
void swap(double&, double&);
void bubbleSort(double* const, const int);

//*****************************************************************************************************

int main()
{
	const int SIZE = 10;
	double data[SIZE];
	double* ptr = data;

	getAllData(ptr, SIZE);

	cout << fixed << showpoint << setprecision(2);

	cout << string(50, '*') << endl;
	cout << "All data before sorting:" << endl;
	displayAllValue(ptr, SIZE);
	cout << endl;

	bubbleSort(ptr, SIZE);

	cout << string(50, '*') << endl;
	cout << "All data after sorting:" << endl;
	displayAllValue(ptr, SIZE);
	cout << endl;

	cout << "The sum is " << calcSum(ptr, SIZE);

	return 0;
}

//*****************************************************************************************************

void getAllData(double* pArray, int size)
{
	const int MIN_GRADE = 0;
	const int MAX_GRADE = 1000;

	cout << "Enter all data: " << endl;

	for (int i = 0; i < size; i++)
	{
		cout << "Data [" << i + 1 << "]: ";
		cin >> pArray[i];

		while (*(pArray + i) < MIN_GRADE || *(pArray + i) > MAX_GRADE)
		{
			cout << "Value cannot be more than 1000 or less than 0" << endl;
			cout << "Data [" << i + 1 << "]: ";
			cin >> pArray[i];
		}

		
	}

}

//*****************************************************************************************************

double calcSum(const double* pArray, int size)
{
	double sum = 0;
	
	for (int i = 0; i < size; i++)
	{
		sum += *(pArray + i);
	}


	return sum;
}

//*****************************************************************************************************

void displayAllValue(const double* pArray, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << left << setw(8) <<  *pArray << " ";
		pArray++;
	}

}

//*****************************************************************************************************

void swap(double& first, double& second)
{
	double temp = first;
	first = second;
	second = temp;
}

//*****************************************************************************************************

void bubbleSort(double* const pArray, const int SIZE)
{
	for (int comparison = SIZE - 1; comparison > 0; comparison--)
	{
		for (int i = 0; i < comparison; i++)
		{
			if (pArray[i] > pArray[i + 1])
			{
				swap(pArray[i], pArray[i + 1]);
			}
		}
	}
}

//*****************************************************************************************************
/*
Enter all data:
Data [1]: 2
Data [2]: 4
Data [3]: 7
Data [4]: 8
Data [5]: 5
Data [6]: 3
Data [7]: 2
Data [8]: 5
Data [9]: 6
Data [10]: 5
**************************************************
All data before sorting:
2.00     4.00     7.00     8.00     5.00     3.00     2.00     5.00     6.00     5.00
**************************************************
All data after sorting:
2.00     2.00     3.00     4.00     5.00     5.00     5.00     6.00     7.00     8.00
The sum is 47.00
C:\Users\rylan\Desktop\College Year 2\COSC 1560 - Fall\DataAnalysis1\Debug\DataAnalysis1.exe (process 9928) exited with code 0.
Press any key to close this window . . .
Enter all data:
Data [1]: 1.5
Data [2]: 2.14
Data [3]: 3.90
Data [4]: 15.67
Data [5]: 100000
Value cannot be more than 1000 or less than 0
Data [5]: 100
Data [6]: -9
Value cannot be more than 1000 or less than 0
Data [6]: 3.14
Data [7]: 4.17
Data [8]: 0.05
Data [9]: 9.2
Data [10]: 10.3
**************************************************
All data before sorting:
1.50     2.14     3.90     15.67    100.00   3.14     4.17     0.05     9.20     10.30
**************************************************
All data after sorting:
0.05     1.50     2.14     3.14     3.90     4.17     9.20     10.30    15.67    100.00
The sum is 150.07
C:\Users\rylan\Desktop\College Year 2\COSC 1560 - Fall\DataAnalysis1\Debug\DataAnalysis1.exe (process 616) exited with code 0.
Press any key to close this window . . .


*/
