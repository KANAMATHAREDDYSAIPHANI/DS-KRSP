#include<iostream>
using namespace std;

int main()
{
	// Displaying "Hello World!!"
	cout << "Hello World!!";

	// Initializing an array of strings named cars with four elements and updating the first element
	string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
	cars[0] = "Opel";

	// Printing all elements in the array using a loop
	for (int i = 0; i < 4; i++)
		cout << cars[i] << " ";
	
	// Initializing an array of integers named myNumbers and using a range-based for loop to iterate through the elements
	int myNumbers[5] = {10, 20, 30, 40, 50};
	for (int i : myNumbers) {
		cout << i << "\n";
	}

	// Initializing an array of strings named cars and updating the second and third elements
	string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};
	cars[1] = "Volvo";
	cars[2] = "BMW";

	// Printing all elements in the array using a loop
	for (int i = 0; i < 4; i++)
		cout << cars[i] << " ";

	// Initializing an array of integers named myNum and printing the size of the array
	int myNum[5] = {10,20,30,40};
	cout << "size" << sizeof(myNum);

	// Initializing a 2D array of strings named letters and using nested loops to iterate through and print each element
	string letters[2][4] = {
		{"A","B","C","D"},
		{"E","F","G","H"}
	};

	// Initializing a 3D array of strings named letters and using nested loops to iterate through
	string letters[2][2][2] = {
		{
			{"A","B"},
			{"C","D"}
		},
		{
			{"E","F"},
			{"G","H"}
		}
	};

	// GAME	
	// Representing ships with "1" in a 4x4 grid
	bool ships[4][4] = {
	  { 0, 1, 1, 0 },
	  { 0, 0, 0, 0 },
	  { 0, 0, 1, 0 },
	  { 0, 0, 1, 0 }
	};

	// Tracking hits and turns in a game loop until all ships are hit
	int hits = 0;
	int numberOfTurns = 0;

	while (hits < 4) {
		int row, column;

		// Player input for row and column
		cout << "Selecting coordinates\n";
		cout << "Choose a row number between 0 and 3: ";
		cin >> row;
		cout << "Choose a column number between 0 and 3: ";
		cin >> column;

		// Checking if a ship exists in the selected coordinates
		if (ships[row][column]) {
			ships[row][column] = 0;
			hits++;
			cout << "Hit! " << (4 - hits) << " left.\n\n";
		}
		else {
			cout << "Miss\n\n";
		}

		numberOfTurns++;
	}

	cout << "Victory!\n";
	cout << "You won in " << numberOfTurns << " turns";
}
