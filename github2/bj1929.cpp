#include <iostream>

using namespace std;

int main(void) {
	int num1, num2;
	cin >> num1 >> num2;

	int cnt = 0;
	if (num1 == 1)
		cout << "1" << endl;

	for (int i = num1; i <= num2; i++) {
		for (int j = 2; j <= i; j++) {
			if (i % j == 0) {
				cnt++;
			}
		}
		if (cnt == 1)
			cout << i << endl;
		cnt = 0;
	}
	return 0;
}