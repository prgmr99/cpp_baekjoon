#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
	vector<int> v;
	int num, sum = 0, cnt = 0;
	for (int i = 0; i < 7; i++) {
		cin >> num;
		if (num % 2 != 0) {
			v.push_back(num);
			sum += num;
			cnt++;
		}
	}
	
	if (cnt == 0)
		cout << -1 << '\n';
	else {
		int smallest = v[0];
		for (int i = 0; i < v.size(); i++) {
			smallest = min(smallest, v[i]);
		}
		cout << sum << '\n';
		cout << smallest << '\n';
	}
	return 0;
}