#include <iostream>
#include <string>

using namespace std;

// ���ڿ��� ó������ �дٰ� ������ ������ cnt������ ���ϴ� ������ �ϸ� ���?

// ���� Ǯ��
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
// ù ��° ���ڷ� iostream ��ü(Ű����� �Է¹޴� ��� cin��ü ���)
// �� ��° ���ڷ� string ������ �̸�
// �� ��° ���ڷ� delimitChar�� ���� �Ǵµ� ���� ����(default�� '\n'�� ����.
// ��, iostream ��ü���� character�� delimitChar�� ���� ������ �о� string ������ �����ϴ� �ǹ�.


// �ؼ�
/*int main(void)
{
	string str;
	getline(cin, str);
	int cnt = 0;
	bool space = false;
	if (str.empty())  // ���ڿ��� ���� ���
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

	if (str[0] == ' ')  // ���ڿ��� ���� �տ� ������ �ִ� ���
		cnt--;
	if (str[str.length() - 1] == ' ')  // ���ڿ��� ���� �ڿ� ������ �ִ� ���
		cnt--;
	cout << cnt;
	return 0;
}*/