#include <iostream>
#include <queue>
#include <string>
using namespace std;
queue<int> q;
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num;
	cin >> num;
	while (num--) {
		string str;
		cin >> str;
		if (str.compare("push")==0) {
			int data;
			cin >> data;
			q.push(data);
		}
		else if (str.compare("pop")==0) {
			if (q.size()==0) 
				cout << -1 << '\n';
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
		else if (str.compare("size") == 0)
			cout << q.size() << '\n';
		else if (str.compare("empty") == 0) {
			if (!q.empty()) 
				cout << 0 <<'\n';
			else
				cout << 1 << '\n';
		}
		else if (str.compare("front") == 0) {
			if (!q.empty()) 
				cout << q.front() << '\n';
			else
				cout << -1<<'\n';
		}
		else if (str.compare("back") == 0) {
			if (!q.empty())
				cout << q.back() << '\n';
			else
				cout << -1<<'\n';
		}
	}
	return 0;
}