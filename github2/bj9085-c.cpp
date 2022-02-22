#include <iostream>
using namespace std;

int main(void) {
	int t, n;
	cin >> t;
	
	for (int j = 0; j < t; j++) {
		cin >> n;
		int num, sum = 0;
		for (int i = 0; i < n; i++) {
			cin >> num;
			sum += num;
		}
		cout << sum << '\n';
	}
	return 0;
}