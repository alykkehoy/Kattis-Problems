#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int flip(string stringNum) {
	int num = 0;
	for (int i = 0; i < stringNum.length(); i++) {
		num += ((int)stringNum[i] - '0') * pow(10 , i);
	}
	return num;
}

int main() {
	string firstNum, secondNum;
	cin >> firstNum;
	cin >> secondNum;

	int fNum = flip(firstNum);
	int sNum = flip(secondNum);

	if (fNum > sNum) {
		cout << fNum;
	}
	else {
		cout << sNum;
	}
	//system("pause");
	return 0;
}