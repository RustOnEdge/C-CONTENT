#include<iostream>
using namespace std;
int sumOfArray(int a[], int n) {
	if (n == 0) {
		return 0;
	}
	return a[0] + sumOfArray(a + 1, n - 1);
}

int sumOfArray2(int a[], int n) {
	if (n == 0) {
		return 0;
	}
	return a[n - 1] + sumOfArray2(a, n - 1);
}

bool presentElement(int a[], int n, int i, int key) {
	if (n == 0) return false;
	if (a[i] == key) return true;

	return presentElement(a, n - 1, i + 1, key);

}

int firstIndex(int a[], int n, int index, int key) {
	if (a[index] == key) return index;
	return firstIndex(a, n - 1, index + 1, key);
}

int firstIndex2(int a[], int n, int index, int key) {
	if (a[n] == 0) return index;
	if (a[n] == key) index = n;


	return firstIndex(a, n - 1, index, key);
}

int lastIndex(int a[], int n, int index, int key) {
	if (n == 0) return index;
	if (a[n] == key) return n;

	return lastIndex(a, n - 1, index, key);
}

int lastIndex2(int a[], int n, int index, int key) {
	if (n == 0) return -1;

	int lastElement = lastIndex2(a, n - 1, index+1, key);
	
	if (lastElement == -1) {
		if (key == a[index]) return index;
		return -1;
	}
}

void positionsOfKey(int a[], int n, int index, int key) {
	if (n == 0) return;
	if (a[index] == key) {
		cout << index << " ";
	}

	return positionsOfKey(a, n - 1, index + 1, key);
}


int main() {
	int a[] = { 1,2,3,4,5 };
	int arr[] = { 5, 5, 5, 6, 6, 5 };
	int arr2[] = { 5, 5, 5, 3, 5, 1, 6, 5, 3, 6 };
	// cout << lastIndex2(arr2, 10, 0, 5);

	// positionsOfKey(arr2, 10, 5);
	positionsOfKey(arr2, 10, 0, 5);

	return 0;
}