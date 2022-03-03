/*
Author: Bianca Fernandes Nascimento
Language: C++
Objective: Asks the user to enter 10 numbers and then it sorts them in ascending order
Made in Visual Studio
*/

#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;
int const N = 10;
int t[N];


void enterAndSortSelection(int t[N])
{
	//Choose the numbers that will go to the table
	cout << "\n ------------------------------------------------------------------\n";
	cout << "\n Give 10 numbers: ";
	for (int i = 0; i < N; i++)
	{
		cin >> t[i];
	}

	// Declaring a boolean variable
	bool sortedTable = false;

	// Condition for organizing the order of numbers
	while (sortedTable == false) {
		sortedTable = true;
		for (int index = 0; index <= 10; index++)
		{
			if (t[index] > t[index + 1])
			{
				int exchange = t[index]; // exchange is the variable that inverts with the index, so here "exchange" receives the table index
				t[index] = t[index + 1]; // Here the algorithm takes the index and adds one more to walk in the table
				t[index + 1] = exchange; // then the index + 1 will receive the "exchange"
				sortedTable = false; // Returns to false to continue looping until the entire table is scanned
			}
		}
	}
}

int main() {

	enterAndSortSelection(t);

	//sortedTable(t);

	cout << "\n ------------------------------------------------------------------\n";
	cout << setw(10) << left << "Index: "; // Space of 10 to the left of the "Index" description
	for (int i = 0; i < N; i++)cout << setw(6) << left << i; // Here, the for is done to continue printing the index until the table is finished
	cout << "\n ------------------------------------------------------------------\n";
	cout << setw(10) << left << "T=: "; 
	for (int i = 0; i < N; i++) cout << setw(6) << left << t[i + 2]; // Add two to the index because as it starts at zero it needs to increase by two
	cout << "\n ------------------------------------------------------------------\n";
	cout << "That's it, thank you! \n"; 
	cout << "\n ------------------------------------------------------------------\n";
}
