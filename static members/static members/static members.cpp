#include <iostream>
#include "static members class.cpp"
using namespace std;

int main() {
	Student s1(18, "s5550740", "Kent Liwag");
	Student s2, s3, s4, s5, s6;
	s1.displayInformation();

	s1.setName("Kent Franz Maano Liwag");

	s1.displayInformation();
	s2.displayInformation();
	Student s7(s1);

	s7.displayInformation();

	s7.setName("Bob Raven Smart");
	s7.setStudentID("s447503");
	s7.setAge(19);

	s7.displayInformation();

	int a, x;
	cin >> a, x;

	int *arr = new int[a];
}