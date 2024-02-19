#include <iostream>
using namespace std;

class Student {

	/*
	static means that the variable can only be accessed by calling classand using scope resolution operator '::'
	static function can only access static data & can call only static functions
	static functions does not have 'this' since it belongs to the class
	*/ 
	static int totalStudents; // total number of students
	int age = 18;
	string name = "N/A";
	string studentID = "N/A";


public:

	Student() {
		totalStudents++;
	}

	Student(int age, string studentID, string name) {
		this->age = age;
		this->studentID = studentID;
		this->name = name;
		totalStudents++;
	}

	static int getTotalStudents() {
		return totalStudents;
	}

	int getAge() {
		return age;
	}

	void setAge(int age) {
		this->age = age;
	}

	string getStudentID() {
		return studentID;
	}

	void setStudentID(string studentID) {
		this->studentID = studentID;
	}

	string getName() {
		return name;
	}

	void setName(string name) {
		this->name = name;
	}

	void displayInformation() {
		cout << "STUDENT ID: " << this->getStudentID() << " -- FULL NAME: " << this->getName() << " -- AGE:" << this->getAge() << " -- STUDENT COUNT: " << totalStudents << endl;
	}
};

int Student::totalStudents = 0; // initialize static data member, since totalStudents isn't part of the object but the class itself
