#include <iostream>
using namespace std;

class Rectangle {
public:
	void Area() {
		cout << "Area" << endl;
	}
	virtual void Perimeter() {
		cout << "Rectangle perimeter" << endl;
	}
};

class Cuboid : public Rectangle {
public:
	void Volume() {
		cout << "Volume" << endl;
	}
	void Perimeter() override {
		cout << "Cuboid perimeter" << endl;
	}
};

int main() {
	Cuboid* c = new Cuboid();

	c->Area();
}