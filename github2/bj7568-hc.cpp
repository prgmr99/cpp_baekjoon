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

// �ڱ⺸�� ū Ű, ū �����Ը� ���� ����� �ִٸ�, ����� 1�� ���� ��Ŵ.
// pair������ �迭 Ȱ�� utility ���̺귯�� Ȱ��.