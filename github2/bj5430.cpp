#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

/*int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int testcase;
	cin >> testcase;
	while (testcase--) {
		string func, arr;
		cin >> func;
		int num;
		cin >> num;
		//bool reverse = false, error = false;
		deque<int> dq;

		cin >> arr;
		//string s = "";
		for (int i = 0; i < arr.size(); i++) {
			if (isdigit(arr[i])) {
				s += arr[i];
			}
			else {
				if (!s.empty()) {
					dq.push_back(stoi(s));
					s = "";
				}
			}
		}
		for (auto o : func) {
			if (o == 'R') {
				if (reverse)
					reverse = false;
				else
					reverse = true;
			}
		}
		if (!error) {
			cout << '[';
		}
		if (reverse && !dq.empty()) {
			for (auto o = dq.rbegin(); o != dq.rend(); o++) {
				if (o == dq.rend() - 1)
					cout << *o;
				else
					cout << *o << ',';
			}
		}
		else if (!reverse && !dq.empty()) {
			for (auto o = dq.begin(); o != dq.end(); o++) {
				if (o == dq.end() - 1)
					cout << *o;
				else
					cout << *o << ',';
			}
		}
		if (!error)
			cout << "]\n";
	}
}*/

int main(void) {
	ios::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);
	int testcase;
	cin >> testcase;

	while (testcase--) {
		string func;
		cin >> func;

		int N;
		cin >> N;

		string arr;
		cin >> arr;

		deque<int> dq;
		string temp; // 두 자릿수 이상 숫자를 위해
		for (int i = 0; i < arr.length(); i++) {
			if (arr[i] == '[')
				continue;
			else if ('0' <= arr[i] && arr[i] <= '9')
				temp += arr[i];
			else if (arr[i] == ',' || arr[i] == ']') {
				if (!temp.empty()) {
					dq.push_back(stoi(temp));
					temp.clear();
				}
			}
		}
		bool print = true;
		bool left = true;
		for (int i = 0; i < func.length(); i++) {
			if (func[i] == 'R')
				left = !left;
			else {
				if (dq.empty()) {
					print = false;
					cout << "error\n";
					break;
				}
				else {
					if (left)
						dq.pop_back();
					else
						dq.pop_back();
				}
			}
		}
		if (print) {
			if (left) {
				cout << "[";
				while (!dq.empty()) {
					cout << dq.front();
					dq.pop_front();
					if (!dq.empty())
						cout << ",";
				}
				cout << "]\n";
			}
			else {
				cout << "[";

				while (!dq.empty()) {
					cout << dq.back();
					dq.pop_back();
					if (!dq.empty())
						cout << ",";
				}
				cout << "]\n";
			}
		}
	return 0;
}