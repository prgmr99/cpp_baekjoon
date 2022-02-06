#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	queue<int> q;
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		q.push(i);
	}
	while (q.size() != 1) {
		int data;
		q.pop();
		data = q.front();
		q.pop();
		q.push(data);
	}
	cout << q.front() << '\n';
	return 0;
}