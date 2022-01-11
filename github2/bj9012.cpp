#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool check(string str) {
	int len = (int)str.length();
	stack <char> st;

	for (int i = 0; i < len; i++) {
		char c = str[i];

		if (c == '(') {
			st.push(str[i]);
		}
		else {
			if (!st.empty()) {
				st.pop();
			}
			else
				return false;
		}
	}
	return st.empty();
}

int main(void) {
	int T;
	cin >> T;
	
	for (int i = 0; i < T; i++) {
		string str;
		cin >> str;

		if (check(str)) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}
	return 0;
}

// stack���ε� Ǯ �� ������? -> �׷���