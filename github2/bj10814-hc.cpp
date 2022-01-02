#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(pair<int,string> a, pair<int,string> b) {
	return a.first < b.first;
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<pair<int, string>>vec;
	int num, age;
	cin >> num;
	string str;

	for (int i = 0; i < num; i++) {
		cin >> age;
		cin >> str;
		vec.push_back(make_pair(age, str));
	}

	stable_sort(vec.begin(), vec.end(), compare);
	for (int i = 0; i < num; i++) {
		cout << vec[i].first << ' ' << vec[i].second << '\n';
	}
	return 0;
}

// 원래의 순서를 손상시키지 않으면서 정렬하는 것: stable sort
// endl은 출력 버퍼를 비워주는 과정(flush)이 들어가 있어서 \n보다 더 느리다는 것.
// cout<<i<<endl;(4272ms)
// cout<<i<<'\n';(36ms)
// printf("%d\n,i);(20ms)