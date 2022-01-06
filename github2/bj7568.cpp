#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first > b.first&& a.second > b.second)
		return a.first > b.first;
	else if (a.first > b.first&& a.second < b.second)
		return a.first == b.first;
	else if (a.first < b.first&& a.second > b.second)
		return a.first == b.first;
	return a.first > b.first;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int weight, height, num;
	cin >> num;
	vector<pair<int, int>> v;
	for (int i = 0; i < num; i++) {
		cin >> weight >> height;
		v.push_back(make_pair(weight, height));
	}
	sort(v.begin(), v.end(), compare);

}

// 정렬을 할 필요가 있을까? -> 없을 거 같다는 생각이 드네요