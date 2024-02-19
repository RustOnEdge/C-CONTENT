#include<iostream>
#include<string>
using namespace std;

void reversePrint(char input[], int size) {
	if (size == 0) {
		return;
	}

	cout << input[size - 1];
	return reversePrint(input, size - 1);
}

void print(char input[]) {
	if (input[0] == '\0') {
		return;
	}

	cout << input[0];
	print(input + 1);
}

void revPrint(char input[]) {
	if (input[0] == '\0') return;

	revPrint(input + 1);
	cout << input[0];
}

int lengthArr(char input[]) {
	if (input[0] == '\0') return 0;

	return lengthArr(input + 1) + 1;
}

void replaceElement(char input[], char v) {
	if (input[0] == '\0') return;

	if (input[0] == v) {
		cout << 'x' << " ";
	} else cout << input[0] << " ";
	replaceElement(input + 1, v);

}

void removeElement(char input[], char v) {
	if (input[0] == '\0') return;
	if (input[0] == v) {
		removeElement(input + 1, v);
	} else {
		for (int i = 0; input[i] != '\0'; i++) {
			input[i] = input[i + 1];
		}
		removeElement(input, v);
	}
}

void print_subs(string input, string output) {
	if (input.length() == 0) {
		cout << output << endl;
		return;
	}
	print_subs(input.substr(1), output + input[0]);
	print_subs(input.substr(1), output);
}

void print_subs(char input[], char output[], int i) {
	if (input[0] == '\0') {
		output[i] = '\0';
		cout << output << endl;
		return;
	}
	output[i] = input[0];
	print_subs(input + 1, output, i + 1);
	print_subs(input + 1, output, i);
}

void stringToInt(string s, int i) {
	if (s.length() == 0) {
		return;
	}
	cout << int(s.at(i)) << " ";
	stringToInt(s.substr(1), i);
}

int stairCase(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}

	return stairCase(n - 1) + stairCase(n - 2) + stairCase(n - 3);
}

int main() {
	char arr[6] = { 'H','e', 'l', 'l', 'o' };
	char arr2[10] = {'a', 'a', 'b', 'c', 'd', 'a', 'a', 'e', 'a'};


	string s = "Hello World";
	// stringToInt(s, 0);

	cout<<stairCase(4);
	/*
	string input;
	cin >> input;
	string output = "";
	print_subs(input, output);
	*/

	/*
	char input[100];
	// cin >> input;

	// removeElement(input, 'a');

	string a = "Hello world";

	for (int i = 0; i < a.length(); i++) {
		cout << a[i];
	}

	string b;

	for (int i = 0; b[i] != 'x'; i++) {
		
	}

	for (int i = 0; i < b.length(); i++) {
		cout << b[i];
	}
	*/


}