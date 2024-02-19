#include <iostream>

class Employee {
public:
	double baseSalary = 20000.0;

	virtual void information() {
		std::cout << "EMPLOYEE TYPE: EMPLOYEE" << std::endl;
	}

	virtual void calculateSalary() {
		std::cout << "Employee salary is $" << baseSalary * 1.05 << std::endl;
	}
};

class HR : public Employee {
public:
	void information() {
		std::cout << "EMPLOYEE TYPE: HR" << std::endl;
	}

	void calculateSalary() {
		std::cout << "HR salary is $" << baseSalary * 2.5 << std::endl;
	}
};

class Manager : public Employee {
public:
	void information() {
		std::cout << "EMPLOYEE TYPE: MANAGER" << std::endl;
	}

	void calculateSalary() {
		std::cout << "Manager salary is $" << baseSalary * 1.5 << std::endl;
	}
};

class Engineer : public Employee {
public:
	void information() {
		std::cout << "EMPLOYEE TYPE: ENGINEER" << std::endl;
	}

	void calculateSalary() {
		std::cout << "Engineer salary is $" << baseSalary * 1.25 << std::endl;
	}
};
int main() {
	Employee emp;
	HR hr;
	Manager manager;
	Engineer engineer;
	int c;

	Employee** e = new Employee * [20];
	
	e[0] = &hr;
	for (int i = 1; i <= 3; i++) {
		e[i] = &manager;
	}
	for (int i = 4; i <= 19; i++) {
		e[i] = &engineer;
	}

	while (true) {


		std::cout << "\t\tEMPLOYEE'S DATABASE" << std::endl << "\t\tHRS (1 -> 1)" << std::endl << "\t\tMANAGERS (2 -> 4)" << std::endl << "\t\tENGINEERS (5 -> 20)" << std::endl;
		std::cin >> c;

		// derivatives of base class (children)
		switch (c) {
		case 1:
			e[0]->information();
			e[0]->calculateSalary();
			break;
		case 2:
			e[1]->information();
			e[1]->calculateSalary();
			break;
		case 5:
			e[4]->information();
			e[4]->calculateSalary();
			break;
		default:
			emp.information();
			emp.calculateSalary(); // base class
			break;
		}
	}
}