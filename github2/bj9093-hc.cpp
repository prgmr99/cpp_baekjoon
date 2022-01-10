#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

/*int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int tcase, temp = 0;
	cin >> tcase;
	string bufferflush;
	getline(cin, bufferflush);

	for (int i = 0; i < tcase; i++) {
		string s;
		getline(cin, s);

		string temp;
		for (int j = 0; j < s.length(); j++) {
			if (s[i] == ' ') {
				reverse(temp.begin(), temp.end());
				cout << temp << " ";
				temp.clear();
			}
			else
				temp += s[i];
		}
		reverse(temp.begin(), temp.end());
		cout << temp << "\n";
	}
	return 0;
}*/

int main(void) {
	int T;
	string sen;
	stack <char> st;

	cin >> T;
	cin.ignore(); // �Է� ���� �����ֱ�(cin ��� �� \n�� �Է¹��ۿ� �����־ getline���� �Է�ó���� �ȴ�.)
	while (T--) {
		getline(cin, sen);
		sen += ' ';  // ���ڿ� �������� ' '�� �ƴϹǷ� �ܾ ������ �� ����.

		for (int i = 0; i < sen.size(); i++) {
			if (sen[i] == ' ') {
				while (!st.empty()) {
					cout << st.top();
					st.pop();
				}
				cout << ' ';
			}
			else
				st.push(sen[i]);
		}
		cout << '\n';
	}
	return 0;
}

// getline�� ���� �� �پ� �޾ƿ;� ��.
// �׽�Ʈ ���̽��� ���� ���� ���۸� ������ ��.
// �Ųٷ� ����ؾ��ϹǷ� �������� ������ ������ Ȱ����.

// cin�� '\n'�� ������ ���� �ʴ´�.(�Է¹��ۿ� ���ܵд�.)
// getline�� '\n'�� ������ ��´�.
// getline(�о�� �Է½�Ʈ��, ������ ���ڿ� ����)
// cin�� >>�����ڿ����� ���鹮�ڿ��� �Է��� ���� ������, �̷� ������ �ذ��ϱ� ����
// getline()�Լ� �̿�(hello vs hello world)
/*
int n;
string str;
cin >> n;
getline(cin, str);*/
// �� �ڵ��� �����ϸ� n�� �Է¹��� �� ���ڿ��� �Է¹��� �ʰ� �ٷ� ���� �ڵ�� �Ѿ�� �ȴ�.
// ������ ���ۿ� ���� ���� �Է��� �� ���� ����('\n')�� �״�� �����־� getline()�� ���� ����.
// �̸� �ذ��ϱ� ���� cin.ignore()�Լ� �̿�.
