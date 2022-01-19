#include <iostream>
#include <queue>
using namespace std;

/*int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	queue<int> q;
	int n, k, cnt = 1, temp;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}
	cout << '<';
	while (q.size() > 0) {
		if (cnt == k) {
			cout << q.front() << ", ";
			q.pop();
			cnt = 1;
		}
		else {
			temp = q.front();
			q.pop();
			q.push(temp);
			cnt++;
		}
		if (q.size() < k) {
			while (!q.empty()) {
				cout << q.front() << ", ";
				q.pop();
				if (q.size() == 1) {
					cout << q.front();
					q.pop();
				}
			}
		}
	}
	cout << '>' << '\n';
	return 0;
}*/
int main() {
	int N, K;
	cin >> N >> K;
	queue<int> circle;
	for (int i = 0; i < N; i++) {
		circle.push(i + 1);
	}
	cout << "<";
	while (circle.size() - 1) {
		for (int i = 0; i < K - 1; i++) {
			circle.push(circle.front());
			circle.pop();
		}
		cout << circle.front() << ", ";
		circle.pop();
	}
	cout << circle.front() << ">";
	return 0;
}