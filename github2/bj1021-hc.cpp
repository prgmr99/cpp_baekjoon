#include <iostream>
#include <deque>
using namespace std;

int main(void) {
	deque<int> d;
	int N, M, cnt = 0;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		d.push_back(i);
	}
	while (M--) {
		int pos, idx;
		cin >> pos;
		for (int i = 0; i < N; i++) {
			if (d[i] == pos) {
				idx = i;
				break;
			}
		}
		if (idx < d.size() / 2 + 1) {
			for (int i = 0; i < d.size(); i++) {
				if (d.front() == pos) {
					d.pop_front();
					break;
				}
				d.push_back(d.front());
				d.pop_front();
				cnt++;
			}
		}
		else {
			for (int i = 0; i < d.size(); i++) {
				if (d.front() == pos) {
					d.pop_front();
					break;
				}
				d.push_front(d.back());
				d.pop_back();
				cnt++;
			}
		}
	}
	cout << cnt;
	return 0;
}