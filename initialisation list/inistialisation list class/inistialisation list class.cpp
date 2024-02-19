#include <iostream>
using namespace std;

class Student {
public:
	int age;
	const int rollNumber; // constant 'const' is an unchangeable value
	int& x; // reference variable is a variable that refers to another 

	/*
	Student contstructor
	':' is the initialisation list 
	rollNumber(r) will be assigned the value r, whiched is passed into parameters

	since constants and reference variables need to be assigned in compilation,
	initialisation list should be used when using constants or reference variables that are not assigned in compilation
	*/
	Student(int  r, int age) : rollNumber(r), age(age), x(this->age) {

	}
};