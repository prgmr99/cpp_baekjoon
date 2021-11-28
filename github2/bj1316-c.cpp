#include <iostream>
#include <string>
using namespace std;


// 그룹단어: 각 문자가 연속해서 나타나는 경우

bool wordCheck(string str)
{
	bool alphabet[26] = { false };

	for (int i = 0; i < str.length(); i++)
	{
		if (alphabet[str[i] - 'a']) // true이면 이미 있었기 때문에 false. 그리고 a의 인덱스=0.
			return false;
		else                        // false이면 처음 오는 알파벳이므로 check
		{
			char tmp = str[i];      // 알파벳이 왔으면 true로 바꿔준다.
			alphabet[str[i] - 'a'] = true;

			while (1)
			{
				if (tmp != str[++i])// 현재 알파벳과 다른 알파벳이 올 때까지 탐색한다.
				{
					i--;
					break;
				}
			}
		}
	}
	return true;
}

int main(void)
{
	int num;
	cin >> num;
	
	int cnt = 0;

	for (int i = 0; i < num; i++)
	{
		string str;
		cin >> str;

		if (wordCheck(str))
			cnt++;
	}
	cout << cnt;
	return 0;
}

// 한수 문제를 푼 방식과 유사하다.
// bool값을 반환하는 함수를 만들고 main함수에서 참이면 실행되고 거짓이면 실행되지 않도록 하는 방식.