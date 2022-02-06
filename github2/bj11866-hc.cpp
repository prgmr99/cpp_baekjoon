#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	queue<int> q;
	int n, k;
	int cnt = 1;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		q.push(i + 1);
	}
	cout << "<";
	while (q.size()-1) {
		/*if (cnt == 3) {
			cout << q.front();
			q.pop();
			if(q.size()!=1)
				cout << ", ";
			cnt = 1;
		}
		else {
			q.push(q.front());
			q.pop();
			cnt++;
		}*/
		for (int i = 0; i < k - 1; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front()<< ">";
	return 0;
}