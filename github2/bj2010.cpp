#include <iostream>
using namespace std;

int main(void) {
	int n, sum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int con;
		cin >> con;
		sum += con;
	}
	sum -= (n - 1);
	cout << sum << '\n';
	return 0;
}