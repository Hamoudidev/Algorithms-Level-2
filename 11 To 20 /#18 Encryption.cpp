#include <iostream>
#include <string>
using namespace std;

string ReadText() {
	string text = "";
	cout << "Please enter a text ?" << endl;
	getline(cin, text);

	return text;
}

string EncryptText(string Text, unsigned short EncryptKey) {
	for (int i = 0; i <= Text.length(); i++) {
		Text[i] = char((int)Text[i] + EncryptKey);
	}

	return Text;
}

string DecryptText(string EncryptedText, unsigned short EncryptKey) {
	for (int i = 0; i <= EncryptedText.length(); i++) {
		EncryptedText[i] = char((int)EncryptedText[i] - EncryptKey);
	}

	return EncryptedText;
}

int main() {
	unsigned short EncryptKey = 2;

	string text = ReadText();
	string AfterEncrypt = EncryptText(text, EncryptKey);
	string AfterDecrypt = DecryptText(AfterEncrypt, EncryptKey);

	cout << "\nText Without edits  : " << text << endl;
	cout << "Text With Encryption  : " << AfterEncrypt << endl;
	cout << "Text With Decryption  : " << AfterDecrypt << endl;

	return 0;
}
