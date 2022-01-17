#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	stack<int> s;
	int num, k, sum = 0;
	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum << '\n';
	return 0;
}