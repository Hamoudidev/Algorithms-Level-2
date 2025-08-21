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

int reverseNumbers(int Number) {
	int Remainder = 0, Number2 = 0;

	while (Number > 0) {
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
	}

	return Number2;
}

bool isPalindrome(int Number) {

	return (reverseNumbers(Number) == Number);
}


int main() {
	if(isPalindrome(readPositiveNumber("Please enter the Number ?")))
		cout << "Yes, it's a palindrome number." << endl;
	else
		cout << "No, it's not a palindrome number." << endl;

	return 0;
}
