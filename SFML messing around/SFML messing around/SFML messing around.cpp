#include<iostream>
using namespace std;

double calculateKDR(double k, double d) {
	try {
		return k / d;
	}
	catch (...) {
		return -1;
	}
}

int main() {
	cout << calculateKDR(10, 2);


	return 0;
}