#include <iostream>
#include <string>

using namespace std;

int main() {
	string name, shortName;
	cin >> name;

	shortName.push_back(name[0]);
	for (int i = 1; i < name.length(); i++) {
		if (name[i] == '-') {
			shortName.push_back(name[i + 1]);
		}
	}
	cout << shortName;
	//system("pause");
	return 0;
}