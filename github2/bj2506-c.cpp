#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n, score, sum = 0, total = 0;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if (v[i] == 1) {
			sum += 1;
			total += sum;
		}
		if (v[i] == 0) sum = 0;
	}
	cout << total << '\n';
	return 0;
}