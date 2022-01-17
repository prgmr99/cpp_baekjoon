#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void) {
	string str;
	stack<int> s;
	bool checkLine = false;
	while (1) {
		if (str == "." && s.size() == 1)
			break;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(' || str[i] == '[')
				s.push(str[i]);
			else if (str[i] == ')') {
				if (s.size > 0 && s.top() == '(')
					s.pop();
				else {
					checkLine = true;
					break;
				}
			}
			else if (str[i] == ']') {
				if (s.size > 0 && s.top() == '[')
					s.pop();
				else {
					checkLine = true;
					break;
				}
			}
		}
		if (s.empty() && checkLine == true)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
	return 0;
}

/*int main() {
	while (1) {
		string Text;
		getline(cin, Text);

		if (Text.size() == 1 && Text[0] == '.') break;
		bool check_Line = false;
		stack <char> check;
		for (int i = 0; i < Text.size(); i++) {
			if (Text[i] == '(' || Text[i] == '[')
				check.push(Text[i]);
			else if (Text[i] == ')') {
				if (check.size() > 0 && check.top() == '(')
					check.pop();
				else {
					check_Line = true;
					break;
				}
			}
			else if (Text[i] == ']') {
				if (check.size() > 0 && check.top() == '[')
					check.pop();
				else {
					check_Line = true;
					break;
				}
			}
		}

		if (check.empty() && !check_Line)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	return 0;
}*/


// 나머지 문자열은 신경을 안 써도 되는구나!
// 그냥 ()[]만 다루면 되는 것