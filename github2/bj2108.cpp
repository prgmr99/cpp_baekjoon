#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	int n, temp, range, mid = 0, mostVal, mean = 0;
	int most = -9999;
	int numbers[8001] = { 0, };
	bool not_first = false;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		mean += v[i];
		numbers[v[i] + 4000]++;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 8001; i++) {
		if (numbers[i] == 0)
			continue;
		if (numbers[i] == most) {
			if (not_first) {
				mostVal = i - 4000;
				not_first = false;
			}
		}
		if (numbers[i] > most) {
			most = numbers[i];
			mostVal = i - 4000;
			not_first = true;
		}
	}
	mid = v[v.size() / 2];
	mean = round((double)mean / n);
	range = v.back() - v.front();
	cout << mean << '\n' << mid << '\n' << mostVal << '\n' << range;
	return 0;
}
