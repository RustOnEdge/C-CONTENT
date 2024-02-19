#include <iostream>
#include "inistialisation list class.cpp"
using namespace std;

int main() {
	Student s1(100, 10); // Student is data type, s1 is name of object, the parameters are declared in the constructor
	s1.x = 15; // acessing the public variable age and changing it to 10;


	cout << s1.age;
	return 0;
}