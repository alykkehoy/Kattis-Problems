#include <iostream>
#include <string>

using namespace std;
int main() {
	string input;
	cin >> input;

	char prevChar;
	for (int i = 0; i < input.length(); i++) {
		if (input[i] == 's' && input [i] == prevChar) {
			cout << "hiss";
			return 0;
		}
		prevChar = input[i];
	}
	cout << "no hiss";
	return 0;
}