#include <iostream>
using namespace std;

class Polynomial {
	int c1, c2; // number of coefficients and exponents to input
	int capacity = 0;
	int* poly = new int[capacity]; // stores the polynomial
	int* coef = new int[c1]; // stores the coefficients
	int* expo = new int[c2]; // stores the exponents

public:
	Polynomial(int c1, int c2) {
		this->c1 = c1;
		this->c2 = c2;

		for (int i = 0; i < c1; i++) { // inputs for coefficients
			cout << "N: " << endl;
			int A;
			cin >> A;
			coef[i] = A;
		}
		for (int i = 0; i < c2; i++) { // inputs for exponents
			cout << "N: " << endl;
			int A;
			cin >> A;
			expo[i] = A;
		}
		for (int i = 0; i < c2; i++) { // finding&setting maximum size of polynomial array
			if (capacity < expo[i]) {
				capacity = expo[i] + 1;
				int * newPoly = new int[capacity];
				delete[] poly;
				poly = newPoly;
			}
		}

		for (int i = 0; i < c2; i++) { // storing elements into polynomial array
			poly[expo[i]] = coef[i];
		}
		for (int i = 0; i < capacity; i++) { // storing elements into polynomial array
			if (poly[expo[i]] != coef[i]) {
				poly[i] = 0;
			}
		}
	}
	void print() {
		for (int i = 0; i < capacity; i++) { // printing content of polynomial array
			cout << poly[i] << " ";
			cout << "LC" << endl;
		}
	}
};