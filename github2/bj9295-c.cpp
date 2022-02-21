#include <iostream>
using namespace std;

int main(void) {
	int T, sum = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n1, n2;
		sum = 0;
		cin >> n1 >> n2;
		sum += (n1 + n2);
		cout << "Case "<< i+1 << ": " << sum << '\n';
	}
	return 0;
}