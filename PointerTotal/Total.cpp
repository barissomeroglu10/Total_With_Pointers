/*
In this code, we will calculate sum for two numbers with using pointers and function.

Developer = Barış Someroğlu
Date = 25.04.2024 - 07:00 pm
*/


#include <iostream>

using namespace std;

int TotalWithPointer(int*, int*);

int main()
{
	int Number1, Number2;

	cout << "Please Enter 1. Number = ";
	cin >> Number1;

	cout << "Please Enter 2. Number = ";
	cin >> Number2;

	// Pointer using
	int* ptrNumber1 = &Number1;
	int* ptrNumber2 = &Number2;

	cout << endl;

	cout << "Total of the numbers = " << TotalWithPointer(ptrNumber1, ptrNumber2) << endl << endl; // Call function 

	return 0;
}

// Function definition
int TotalWithPointer(int* ptrNumber1, int* ptrNumber2)
{
	int Total = 0;

	Total = *ptrNumber1 + *ptrNumber2;

	return Total;
}
