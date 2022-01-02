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

// ������ ������ �ջ��Ű�� �����鼭 �����ϴ� ��: stable sort
// endl�� ��� ���۸� ����ִ� ����(flush)�� �� �־ \n���� �� �����ٴ� ��.
// cout<<i<<endl;(4272ms)
// cout<<i<<'\n';(36ms)
// printf("%d\n,i);(20ms)