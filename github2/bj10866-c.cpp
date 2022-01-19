#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	deque<int> d;
	int n;
	cin >> n;
	while (n--) {
		string str;
		cin >> str;
		if (str == "push_front") {
			int num;
			cin >> num;
			d.push_front(num);
		}
		else if (str == "push_back") {
			int num;
			cin >> num;
			d.push_back(num);
		}
		else if (str == "pop_front") {
			if (!d.empty()) {
				cout << d.front() << '\n';
				d.pop_front();
			}
			else
				cout << "-1\n";
		}
		else if (str == "pop_back") {
			if (!d.empty()) {
				cout << d.back() << '\n';
				d.pop_back();
			}
			else
				cout << "-1\n";
		}
		else if (str == "size") {
			cout << d.size() << '\n';
		}
		else if (str == "empty") {
			cout << d.empty() << '\n';
		}
		else if (str == "front") {
			if (!d.empty()) {
				cout << d.front() << '\n';
			}
			else
				cout << "-1\n";
		}
		else if (str == "back") {
			if (!d.empty()) {
				cout << d.back() << '\n';
			}
			else
				cout << "-1\n";
		}
	}
	return 0;
}