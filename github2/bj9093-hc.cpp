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
	cin.ignore(); // 입력 버퍼 지워주기(cin 사용 후 \n가 입력버퍼에 남아있어서 getline에서 입력처리가 된다.)
	while (T--) {
		getline(cin, sen);
		sen += ' ';  // 문자열 마지막은 ' '가 아니므로 단어를 뒤집을 수 없다.

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

// getline을 통해 한 줄씩 받아와야 함.
// 테스트 케이스를 받은 다음 버퍼를 비워줘야 함.
// 거꾸로 출력해야하므로 섭입후출 구조인 스택을 활용함.

// cin은 '\n'를 변수에 담지 않는다.(입력버퍼에 남겨둔다.)
// getline은 '\n'를 변수에 담는다.
// getline(읽어올 입력스트림, 저장할 문자열 변수)
// cin의 >>연산자에서는 공백문자에서 입력을 끊기 때문에, 이런 문제를 해결하기 위해
// getline()함수 이용(hello vs hello world)
/*
int n;
string str;
cin >> n;
getline(cin, str);*/
// 위 코드대로 실행하면 n을 입력받은 후 문자열을 입력받지 않고 바로 다음 코드로 넘어가게 된다.
// 이유는 버퍼에 정수 값을 입력한 뒤 누른 엔터('\n')가 그대로 남아있어 getline()에 들어가기 때문.
// 이를 해결하기 위해 cin.ignore()함수 이용.
