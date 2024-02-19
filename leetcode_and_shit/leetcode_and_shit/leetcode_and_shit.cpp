#include <iostream>
#include <string>
#include <array>
using namespace std;

int LOLW(string const &s) { // length of last word, s sentence
	int c = 0;
	for (int i = s.length(); s[i-1] != ' '; i--) {
		c++;
	}
	return c;
}

double dis(int n1, int n2) { // discount price, n1 original price, n2 discount
	return n1 * (1.0 - (n2 / 100.0));
}

void makeBox(int n) { // makes a box
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "*";
		}
		cout << std::endl;
	}
}

string numsAndLets(string nl) { // mystery function "A5B3C2" = AAAAABBBCC
	string s = "";
	for (int i = 0; i < nl.length(); i += 2) {
		for (int j = 0; j < ((int)nl[i + 1]) - 48; j++) {
			s += nl[i];
		}
	}
	return s;
}

string tweekLetters(string s, array<int, 5> arr) {
	/*
	for (int i : arr) {
		s[i] += arr[i];
	}
	*/
	for (int i = 0; i < s.length(); i++) {
		s[i] += arr[i];
	}
	return s;

}

template <size_t N>

int loop(int(&arr)[N]) {
	int c = 0;
	for (int i : arr) {
		c++;
	}
	return c;
}

int* testArr(int arr[]) {
	for (int i = 0; i < 4; i++) {
		arr[i]++;
		cout << arr[i] << " ";
	}
	return arr;
}

void swap(int &a, int &b) {
	int t;
	t = a;
	a = b;
	b = t;
}

int main() {
	// cout << tweekLetters("apple", {0, 1, -1, 0, -1});
	int arr[4] = { 4,4,4,4 };
	
	
	return 0;
}


