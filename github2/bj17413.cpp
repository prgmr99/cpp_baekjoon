#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
//#include <queue>
using namespace std;

/*int main(void) {
	string sen;
	stack<char> s;
	queue<char> q;
	getline(cin, sen);
	sen += ' ';
	for (int i = 0; i < sen.size(); i++) {
		if (sen[i] == ' ') {
			while (!s.empty()) {
				cout << s.top();
				s.pop();
			}
			cout << ' ';
		}
		else if (sen[i] == '<') {
			int j = i;
			while (1) {
				if (sen[j] == '>') {
					cout << q.front();
					q.pop();
					break;
				}
				cout << q.front();
				q.pop();
				j++;
			}
		}
		else {
			if (sen[i] == '<') {
				while (1) {
					if (sen[i] == '>') {
						q.push(sen[i]);
						break;
					}
					q.push(sen[i]);
				}
			}
			s.push(sen[i]);
		}
	}
	return 0;
}*/

// stack & queue 동시 사용 가능?

void Print(stack<char>& s) {
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
}
int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string str;
	bool tag = false; // <> 안에 들어있는 문자인지 알려준다.
	getline(cin, str);  // '\n'이 들어올 때까지 입력받는다.
	stack<char> s;
	for (char ch : str) {  // str의 문자 하나씩 스택에 넣어주기 위해서 for문 사용
		if (ch == '<') {
			Print(s);  // 얘 앞에 있는 애들도 하나의 단어라 일단 출력해줌
			tag = true;
			cout << ch;
		}
		else if (ch == '>') {
			tag = false;
			cout << ch;
		}
		else if (ch == ' ') {
			Print(s);
			cout << ch;
		}
		else if (tag) {
			cout << ch;
		}
		else {
			s.push(ch);
		}
	}
	Print(s);
	cout << '\n';
	return 0;
}