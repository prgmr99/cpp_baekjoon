#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	for (int i = n; i > 0; i--) {
		for (int j = n; j > i; j--) {
			cout << " ";
		}
		for (int k = 0; k < 2 * i - 1; k++) {
			cout << "*";
		}
		cout << '\n';
	}
	return 0;
}