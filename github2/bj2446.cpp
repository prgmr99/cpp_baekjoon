#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 2*i; j < 2 * n - 1; j++) {
			cout << "*";
		}
		cout << '\n';
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 2; j++) {
			cout << " ";
		}
		for (int j = 0; j < 2*(i+1)+1; j++) {
			cout << "*";
		}
		cout << '\n';
	}
}