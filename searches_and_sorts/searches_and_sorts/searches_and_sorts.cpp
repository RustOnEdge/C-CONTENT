#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int searchValue) {
	int low = 0, high = size - 1, rValue = -1;
	int mid;

	while (low <= high) {
		mid = (low + high) / 2;

		if (searchValue == arr[mid]) {
			rValue = mid;
			break;
		}
		else if (searchValue > arr[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return rValue;
}

int linearSearch(int arr[], int size, int searchValue) {
	int index = 0, rValue = -1;
	while (index < size) {
		if (arr[index] == searchValue) {
			rValue = index;
			break;
		}
		index++;
	}
	return rValue;
}

int main() {
	int arr[] = { 12, 22, 34, 47, 55, 57, 82, 98 };
	int userValue;
	cout << "Enter an integer: " << endl;
	cin >> userValue;

	int result =  linearSearch(arr, 8, userValue);
	cout << result;
}