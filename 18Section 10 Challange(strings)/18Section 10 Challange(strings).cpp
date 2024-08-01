#include <iostream>
#include <string>;
using namespace std;
int main()
{
	string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ " };
	string key{ "fSncBCApuJhqRaHvykEoDXrgQWKNOwVdmjexzbTPLFZiMltIGYUs " };

	string raw_input{};
	cout << "Enter a message: ";
	getline(cin, raw_input);

	string encrypted_input{};
	for (auto c : raw_input) {
		size_t index = alphabet.find(c);
		encrypted_input += key[index];
	}
	cout << "Encrypted message: " << encrypted_input << endl;;

	string decrypted_input{};
	for (auto c : encrypted_input) {
		size_t index = key.find(c);
		decrypted_input += alphabet[index];
	}
	cout << "Decrypted message: " << decrypted_input << endl;
}