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

// stack & queue ���� ��� ����?

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
	bool tag = false; // <> �ȿ� ����ִ� �������� �˷��ش�.
	getline(cin, str);  // '\n'�� ���� ������ �Է¹޴´�.
	stack<char> s;
	for (char ch : str) {  // str�� ���� �ϳ��� ���ÿ� �־��ֱ� ���ؼ� for�� ���
		if (ch == '<') {
			Print(s);  // �� �տ� �ִ� �ֵ鵵 �ϳ��� �ܾ�� �ϴ� �������
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