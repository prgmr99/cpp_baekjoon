#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	int N, left = 0;
	cin >> N;
	vector<pair<int, int>> v(N);
	for (int i = 0; i < N; i++) {
		int temp = 0;
		cin >> v[i].first >> v[i].second;
		temp=v[i].second / v[i].first;
		left += v[i].second % v[i].first;
	}
	cout << left << '\n';
	return 0;
}