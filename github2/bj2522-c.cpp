#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			cout << " ";
		}
		for (int k = 0; k <= i; k++) {
			cout << "*";
		}
		cout << '\n';
	}
	for (int q = 0; q < n - 1; q++) {
		for (int w = 0; w <= q; w++) {
			cout << " ";
		}
		for (int p = 0; p <= n - 2 - q; p++) {
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}