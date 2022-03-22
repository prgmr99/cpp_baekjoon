#include <iostream>
using namespace std;

int main(void) {
	int N, sum = 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = i; j <= 2 * i; j++) {
			sum += j;
		}
	}
	cout << sum << '\n';
	return 0;
}