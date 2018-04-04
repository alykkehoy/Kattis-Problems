#include <iostream>

using namespace std;
int main() {
	int num, bat, sum = 0;
	cin >> num;

	while (cin >> bat) {
		if (bat == -1) {
			num--;
		}
		else {
			sum += bat;
		}
	}
	cout << ((double)sum / num);
	system("pause");
	return 0;
}