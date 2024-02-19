#include <iostream>
using namespace std;

/*
class Panda {
	static char chr;
	int c, cS;
	int& qR = cS;
public:
	Panda(int c, int cS) {
		this->c = c;
		this->cS = cS;
		chr++;
	}

	void total() {
		cout << chr;
	}

	void speak() {
		cout << "GROWLS" << endl;
	}
};

class Dog {
public:

	void speak() {
		cout << "BARK" << endl;
	}
};

char Panda::chr = 'a';

int main() {
	Panda p1(3, 4);
	Dog d1;

	while (true) {
		cout << "Which animal would you like to intereact with?" << endl;
		string c;
		cin >> c;
		if (c == "panda") {
			cout << "What would you like to do with panda?" << endl;
			cout << "1: Speak\n2:..\n3:..\n4:..";
			int c1;
			cin >> c1;
			if (c1 == 1) {
				p1.speak();
			}
		}
		else if (c == "dog") {
			cout << "What would you like to do with dog?" << endl;
			cout << "1: Speak\n2:..\n3:..\n4:..";
			int c2;
			cin >> c2;
			if (c2 == 1) {
				d1.speak();
			}
		}
	}
}
*/



class Vehicle {
public:
	string colour = "default";

	void print() {
		cout << "Vehicle" << endl;
	}
};

class Car : public Vehicle {
public:
	int numGears = 6;

	void print() {
		cout << "Car" << endl;
	}
};


int main() {
	Car c;

	Vehicle* v1 = new Vehicle;
	Vehicle* v2;

	v2 = &c; // v2 pointer is pointing towards address of c
	// v2->print(); // we can only access base class properties (compile time polymorphism)

	cout << &c;
}