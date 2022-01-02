#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second)
		return a.first < b.first;
	return a.second < b.second;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
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