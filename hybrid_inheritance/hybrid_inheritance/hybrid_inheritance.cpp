#include <iostream>
using namespace std;

class Vehicle {
public:
	int v = 4;

	Vehicle() {
		cout << "V construtor called";
	}
};

class Car : virtual public Vehicle {
public:
	int c = 2;

	Car() {
		cout << "C constructor called";
	}
};

class Truck : virtual public Vehicle{
public:
	int t = 5;

	Truck() {
		cout << "T constructor called";
	}
};

class Bus : public Car, public Truck {
public:
	int b = 6;

	Bus() {
		cout << "B constructor called";
	}
};

int main() {

}