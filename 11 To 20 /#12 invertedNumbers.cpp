#include <iostream>
#include <string>
using namespace std;

float readPositiveNumber(string Message) {
	float Number;

	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

void invertedNumbers(int Number) {
	cout << "\n";

	for (int i = Number; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << i;
		}
		cout << "\n";
	}
}


int main() {

	invertedNumbers(readPositiveNumber("Please enter a positive number ?"));

	return 0;
}
