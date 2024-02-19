#include <iostream>
using namespace std;

class Vehicle {
	int maxSpeed = 120;

protected:
	int numTyres = 4; // a protected attribute is one that is unchangeable by the parent class but can be by the child
public:
	string colour = "red"; 

	Vehicle(int maxSpeed) {
		this->maxSpeed = maxSpeed;
		cout << "V constructor was called" << endl;
	}

	~Vehicle() {
		cout << "V deconstructor was called" << endl;
	}
};

class Car : public Vehicle  { // car is inheriting 'numTyres' and 'colour' from parent class Vehicle 
	string tyreType = "norm";

public:
	int numGears = 6;

	Car(string tyreType) : Vehicle(2) {
		this->tyreType = tyreType;
		cout << "C constructor was called" << endl;
	}
	
	~Car() {
		cout << "C deconstructor was called" << endl;
	}
};

class Hyondi : public Car {
	string owner = "none";

public:
	string pattern = "wavy";

	Hyondi(string owner) : Car("Directional") {
		this->owner = owner;
		cout << "H constructor was called" << endl;
	}

	~Hyondi() {
		cout << "H deconstructor was called" << endl;
	}
};

int main() {
	Hyondi h("Kent Liwag");
	Car c("Asymmetrical");
	Vehicle v(300);


}



