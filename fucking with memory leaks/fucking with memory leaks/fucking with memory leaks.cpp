#include<iostream>
using namespace std;

class Array{
public:
	int size;
	int** TwoDimensionalArray;
	int* oneDimensionalArray;

	void virtual createArray(int size) = 0;
	void virtual deleteArray() = 0;
	void virtual printArray() = 0;
	void virtual add() = 0;


	virtual ~Array() {

	}
};


class OneArray : public Array {
public:

	void createArray(int size) {
		oneDimensionalArray = new int[size];
		this->size = size;
	}
	void deleteArray() {
		delete[]oneDimensionalArray;
		cout << "Deleted 1D Array." << endl;
	}
	void printArray() {
		for (int i = 0; i < size; i++) {
			cout << oneDimensionalArray[i] << " ";
		}
	}
	void add() {
		for (int i = 0; i < size; i++) {
			cout << i << " : ";
			cin >> oneDimensionalArray[i];
		}
		cout << "Added values." << endl;
	}
	~OneArray() {

	}
};

class TwoArray : public Array {
public:
	int columns, rows;
	void createArray(int columns) {
		TwoDimensionalArray = new int* [columns];
		this->columns = columns;
		cout << "Number of rows? : " << endl;
		int rows;
		cin >> rows;
		this->rows = rows;
		for (int i = 0; i < columns; i++) {
			TwoDimensionalArray[i] = new int[rows];
		}
	}
	void deleteArray() {
		for (int i = 0; i < columns; i++) {
			delete[]TwoDimensionalArray[i];
		}
		delete[]TwoDimensionalArray;
	}
	void printArray() {
		for (int i = 0; i < columns; i++) {
			if (i > 0) { cout << endl; }
			for (int j = 0; j < rows;j++) {
				cout << TwoDimensionalArray[i][j] << " ";
			}
		}
	}
	void add() {
		int count = 0;
		for (int i = 0; i < columns; i++) {
			for (int j = 0; j < columns; j++) {
				cout << count << " : ";
				cin >> TwoDimensionalArray[i][j];
				count++;
			}
		}
		cout << "Added values." << endl;
	}
	~TwoArray();
};




int main() {
	Array* arr = new TwoArray();
	int n;
	cout << "What is the size of the array? : ";
	cin >> n;
	arr->createArray(n);
	arr->add();
	arr->printArray();
}

