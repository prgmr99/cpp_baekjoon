#include <iostream>
#include <cstring>

using namespace std;

// ���ڿ��� ó������ �дٰ� ������ ������ cnt������ ���ϴ� ������ �ϸ� ���?

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