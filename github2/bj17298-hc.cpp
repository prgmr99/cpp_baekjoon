#include <iostream>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

int ans[1000001];
int seq[1000001];
/*int main(void) {
	stack<int> s;
	
	int N, num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		s.push(num);
	}
}*/
int main(void) {
	int N;
	stack<int> s;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> seq[i];
	for (int i = N - 1; i >= 0; i--) {
		while (!s.empty() && s.top() <= seq[i])
			s.pop();
		if (s.empty())
			ans[i] = -1;
		else
			ans[i] = s.top();
	}
	for (int i = 0; i < N; i++)
		cout << ans[i] << ' ';
	return 0;
}
/*int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> arr(n), ans(n, - 1);  // -1의 값으로 n개에 할당한다.
	stack<int> s;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	for (int i = 0; i < n; i++) {
		while (!s.empty() && arr[s.top()] < arr[i]) {
			ans[s.top()] = arr[i];
			s.pop();
		}
		s.push(i);
	}
	for (int i = 0; i < n; i++)
		cout << ans[i] << ' ';
	return 0;
}*/  