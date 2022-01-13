#include <iostream>
#include <stack>
#include <algorithm>
//#include <vector>
#include <string>
using namespace std;

/*int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	stack <int> st;
	string str = "";
	int n;
	cin >> n;
	int m = 0;

	while (n--) {
		int num;
		cin >> num;
		if (num > m) {
			while (num > m) {
				st.push(++m);
				str += '+';
			}
			st.pop();
			str += '-';
		}
		else {
			bool found = false;
			if (!st.empty()) {
				if (num == st.top()) {
					found = true;
				}
				st.pop();
				str += '-';
			}
			if (!found) {
				cout << "NO" << '\n';
				return 0;
			}
		}
	}
	for (auto num : str) {  // 범위 기반 loop // num 모두 출력.
		cout << num << '\n';
	}
	return 0;
}*/

int main(void) {
	stack <int> st;
	int n;
	cin >> n;
	string str = "";
	int m = 0;
	while (n--) {
		int num;
		cin >> num;
	}
}