#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n, k, cnt = 0;
	vector<int> v;
	cin >> n >> k;
	
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			v.push_back(i);
			cnt++;
		}
	}
	if (cnt < k)
		cout << 0;
	else
		cout << v[k - 1];
	return 0;
}