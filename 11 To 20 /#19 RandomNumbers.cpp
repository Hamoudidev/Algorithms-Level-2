#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

string ReadText() {
	string text = "";
	cout << "Please enter a text ?" << endl;
	getline(cin, text);

	return text;
}

int RandomNumber(int From, int To) {
	int number = rand() % (To - From + 1) + From;

	return number;
}

int main() {
	srand((unsigned)time(NULL));

	cout << RandomNumber(8, 9) << endl;

	return 0;
}
