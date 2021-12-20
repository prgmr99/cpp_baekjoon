#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int num1, num2;
	cin >> num1 >> num2;
	int sum = 0, min = 10000;
	int cnt = 0;

	for (int i = num1; i <= num2; i++) {
		for (int j = 2; j <= i; j++) {
			if (i % j == 0)
				cnt++;
		}
		if (cnt == 2) {
			sum += i;
			if (i < min)
				min = i;
		}
		cnt = 0;
	}
	cout << sum << endl;
	cout << min << endl;
	return 0;
}