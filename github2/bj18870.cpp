#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int num, x, cnt = 0;
	cin >> num;
	vector<int> v(num);
	int temp;
	for (int i = 0; i < num; i++) {
		cin >> x;
		v[i] = x;
	}
	for (int i = 0; i < num; i++) {
		temp = v[i];
		for (int j = 0; j < num; j++) {
			if (temp > v[j])
				cnt++;
		}
		cout << cnt << ' ';
		cnt = 0;
	}
	return 0;
}