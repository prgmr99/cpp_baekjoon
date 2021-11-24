#include <iostream>
#include <cstring>

using namespace std;

// 문자열을 처음부터 읽다가 공백을 만나면 cnt변수에 더하는 식으로 하면 어떨까?

int main(void)
{
	string str;
	cin >> str;
	
	int cnt = 0;
	char ch = '\0';

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ch)
		{
			if (str[0] == ch)
				continue;
			cnt++;
		}
	}

	cout << cnt << endl;
	return 0;
}