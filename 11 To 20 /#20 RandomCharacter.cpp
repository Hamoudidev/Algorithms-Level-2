#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

enum enCharType  { Small = 1, Cpital = 2, Special = 3, Digit = 4 };

int RandomNumber(int From, int To) {
	int number = rand() % (To - From + 1) + From;

	return number;
}

char getRandomCharacter(enCharType charType) {
	switch(charType) {
	case enCharType::Small: {
		return char(RandomNumber(97, 122));
	}
	case enCharType::Cpital: {
		return char(RandomNumber(65, 90));
	}
	case enCharType::Special: {
		return char(RandomNumber(33, 47));
	}
	case enCharType::Digit: {
		return char(RandomNumber(48, 57));
	}
	}
}

int main() {
	cout << getRandomCharacter(enCharType::Small) << endl;
	cout << getRandomCharacter(enCharType::Cpital) << endl;
	cout << getRandomCharacter(enCharType::Special) << endl;
	cout << getRandomCharacter(enCharType::Digit) << endl;

	return 0;
}
