#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*int arr_x[100001];
int arr_y[100001];

bool compare(int a, int b) {
	return a < b;
}

int main(void) {
	int tcase, x, y;
	cin >> tcase;

	for (int i = 0; i < tcase; i++) {
		cin >> x >> y;
		arr_x[i] = x; arr_y[i] = y;
	}
	sort(arr_x, arr_x + tcase, compare);
	sort(arr_y, arr_y + tcase, compare);
	return 0;
}*/
// 더 좋은 도구가 있다.

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first)
		return a.second < b.second;
	return a.first < b.first;
}

int main(void) {
	vector<pair<int, int>> vec;

	int n;
	int x, y;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;
		cin >> y;

		vec.push_back(make_pair(x, y));
	}

	sort(vec.begin(), vec.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << vec[i].first << ' ' << vec[i].second << '\n';
	}
	return 0;
}