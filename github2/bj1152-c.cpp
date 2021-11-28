#include <iostream>
#include <string>

using namespace std;

// 문자열을 처음부터 읽다가 공백을 만나면 cnt변수에 더하는 식으로 하면 어떨까?

// 나의 풀이
/*int main(void)
{
	string str;
	getline(cin, str);

	int cnt = 1;
	char ch = ' ';

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ch)
		{
			cnt++;
		}
	}

	if (str[0] == ch)
		cnt -= 1;

	if (str[str.length() - 1] == ch)
		cnt -= 1;

	cout << cnt << endl;
	return 0;
}*/

// std::getline()
// 첫 번째 인자로 iostream 객체(키보드로 입력받는 경우 cin객체 사용)
// 두 번째 인자로 string 변수의 이름
// 세 번째 인자로 delimitChar가 들어가게 되는데 생략 가능(default로 '\n'가 들어간다.
// 즉, iostream 객체에서 character를 delimitChar를 만날 때까지 읽어 string 변수에 저장하는 의미.


// 해설
/*int main(void)
{
	string str;
	getline(cin, str);
	int cnt = 0;
	bool space = false;
	if (str.empty())  // 문자열이 없는 경우
	{
		cout << "0";
		return 0;
	}
	cnt = 1;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			cnt++;
	}

	if (str[0] == ' ')  // 문자열의 가장 앞에 공백이 있는 경우
		cnt--;
	if (str[str.length() - 1] == ' ')  // 문자열의 가장 뒤에 공백이 있는 경우
		cnt--;
	cout << cnt;
	return 0;
}*/