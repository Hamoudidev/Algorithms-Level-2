#include <iostream>
#include <string>
using namespace std;

void printWordsFromAAAtoZZZ() {
	cout << "\n";
	string word = "";
	for (int i = 65; i <= 90; i++) {
		for (int j = 65; j <= 90; j++) {
			for (int l = 65; l <= 90; l++) {
				//cout << char(i) << char(j) << char(l) << endl;
				word = word + char(i);
				word = word + char(j);
				word = word + char(l);

				cout << word << endl;
				word = "";
			}
		}
		cout << "----------------------------\n";
	}
}

int main() {
	printWordsFromAAAtoZZZ();

	return 0;
}
