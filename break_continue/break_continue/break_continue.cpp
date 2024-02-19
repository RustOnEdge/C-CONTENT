#include <iostream>

int main() {

	std::string sentence = "Hello my name is Kent";
	for (int i = 0; i < sentence.length(); i++) {
		std::cout << sentence[i];
		if (sentence[i] == 'o') {
			std::cout << "\nfound o!\n";
			break; // break will break out the nearest loop
		}
	}

	for (int i = 0; i < sentence.length(); i++) {
		if (sentence[i] == 'o') {
			continue; // will skip to the next iteration
		}
		std::cout << sentence[i]; // this line will not run because the 'continue' keyword is called
	}
}
/*
break is good for finding something in a list of some sort then stopping the loop
continue is good for string manipulation or skipping past elements in an array
*/