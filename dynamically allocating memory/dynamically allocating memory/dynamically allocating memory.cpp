#include <iostream>
using namespace std;

int main() {
	/*
	int* pointer = new int; 
	cin>> *pointer;

	cout << pointer << " " << *pointer;
	delete pointer;
	*/

	/*
	'int*' is the structure for a pointer and 'pointer' is the name, we use 'new'
	to dynamically allocate memory in heap, then 'int' is the data type we are storing.
	dynamically allocated memory must be deleted since it is not automatically deleted 
	like data in stack memory. 'delete pointer' will go to the memory address that the 
	'pointer' is holding and delete the data being stored dynamically.
	*/
	while (true) {


	// CREATES A 'size' BY 'SIZE' GRID USING 2D DYNAMICALLY ALLOCATED ARRAYS

	int size;
	cin >> size;

	char** grid = new char* [size]; // 'grid' is a pointer which points to more the charater array pointers
	for (int i = 0; i < size; i++) {
		grid[i] = new char[size]; // 'grid[i]' refers to each pointer which will be assigned an array of length 'size'
		for (int j = 0; j < size; j++) {
			grid[i][j] = ' '; // we can store data in 'grid' by how it is usually called in normal static 2d arrays
		}
	}
	for (int i = 0; i < size; i++) {
		cout << endl;
		for (int j = 0; j < size; j++) {
			cout << "[" << grid[i][j] << "]";
		}
	}
	for (int i = 0; i < size; i++) {
		delete []grid[i]; // dynamically allocated arrays are required to be deleted, delete[] must be used for arrays
	}					  // the arrays must first be deleted before deleting the array pointer itself or else it will not be deleted
	delete []grid; // deleting the array pointer
	cout << endl;
	}




	/*
	int size;
	cin >> size;
	char* arr = new char[size];

	for (int i = 0; i < size; i++) {
		arr[i] = 'X';
		cout << arr[i] << " ";
	}
	*/

	return 0;
}