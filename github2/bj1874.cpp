#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack <int> st;
	vector <int> v1;
	int n, M = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v1[i];
		M = max(M, v1[i]);
	}
	vector <int> v2(v1);
	sort(v1.begin(), v1.end());
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (v1[j] == v2[i]) {
				st.pop();
				cout << '-' << '\n';
			}
			else {
				st.push(v1[j]);
				cout << '+' << '\n';
			}
		}
	}
}