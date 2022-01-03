#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, mid, cnt = 0, sum = 0, tmp, most_val;
	int number[8001] = { 0, };
	int most = -9999;
	bool not_first = false;
	cin >> n;
	vector<int> v(n);
	double san, fre, ran;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		v.push_back(tmp);
		sum += tmp;
		number[tmp + 4000]++;
	}
	san = round((double)sum / n);
	sort(v.begin(), v.end());
	mid = v[round(n / 2)];
	for (int i = 0; i < 8001; i++) {
		if (number[i] == 0)
			continue;
		if (number[i] == most) {
			if (not_first) {
				most_val = i - 4000;
				not_first = false;
			}
		}
		if (number[i] > most) {
			most = number[i];
			most_val = i - 4000;
			not_first = true;
		}
	}
	ran = v.back() - v.front();
	cout << san << '\n' << mid << '\n' << most_val << '\n' << ran;
	return 0;
}