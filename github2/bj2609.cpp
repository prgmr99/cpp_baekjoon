#include <iostream>
using namespace std;

int divide(int x, int y) {
	if (x % y == 0) {
		return y;
	}
	return divide(y, x % y);
}

int main(void) {
	int n1, n2;
	cin >> n1 >> n2;
	int cm = 0;

	if (n1 >= n2) {
		cm = divide(n1, n2);
	}
	else
		cm = divide(n2, n1);

	cout << cm << '\n';
	cout << n1 * n2 / cm << '\n';
	return 0;
}