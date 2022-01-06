#include <iostream>
#include <utility>
using namespace std;

int main(void) {
	int weight, height, num;
	int rank = 1;
	cin >> num;
	pair<int, int> v[50];
	for (int i = 0; i < num; i++) {
		cin >> v[i].first >> v[i].second;
	}
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			if (v[i].first < v[j].first && v[i].second < v[j].second)
				rank++;
		}
		cout << rank << ' ';
		rank = 1;
	}
}

// 자기보다 큰 키, 큰 몸무게를 가진 사람이 있다면, 등수를 1씩 증가 시킴.
// pair형식의 배열 활용 utility 라이브러리 활용.