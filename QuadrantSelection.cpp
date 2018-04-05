#include <iostream>

int main() {
	int x;
	int y;
	int quad;
	std::cin >> x;
	std::cin >> y;
	if (x > 0) {
		if (y > 0) {
			quad = 1;
		}
		else {
			quad = 4;
		}
	}
	else {
		if (y > 0) {
			quad = 2;
		}
		else {
			quad = 3;
		}
	}
	std::cout << quad;
//	system("pause");
	return 0;
}