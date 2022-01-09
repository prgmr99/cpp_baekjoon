#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
	stack<int> s;
	int tcase, num;
	cin >> tcase;
	string order;

	for (int i = 0; i < tcase; i++) {
		cin >> order;
		if (order == "push") {
			cin >> num;
			s.push(num);
		}

		else if (order == "pop") {
			if (!s.empty()) {
				cout << s.top() << '\n';
				s.pop();
			}
			else
				cout << '-1' << '\n';
		}

		else if (order == "size")
			cout << s.size() << '\n';

		else if (order == "empty") {
			if (!s.empty())
				cout << '0' << '\n';
			else
				cout << '1' << '\n';
		}

		else if (order == "top") {
			if (!s.empty())
				cout << s.top() << '\n';
			else
				cout << '-1' << '\n';
		}
	}
	return 0;
}

// empty()는 비어있으면 true, 있으면 false