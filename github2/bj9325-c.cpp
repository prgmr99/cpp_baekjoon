#include <iostream>
using namespace std;

int main(void) {
	int T, s, n, options, price, sum = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> s;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> options >> price;
			sum += options * price;
		}
		cout << sum + s << '\n';
		sum = 0;
	}
}