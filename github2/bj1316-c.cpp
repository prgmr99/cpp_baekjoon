#include <iostream>
#include <string>
using namespace std;


// �׷�ܾ�: �� ���ڰ� �����ؼ� ��Ÿ���� ���

bool wordCheck(string str)
{
	bool alphabet[26] = { false };

	for (int i = 0; i < str.length(); i++)
	{
		if (alphabet[str[i] - 'a']) // true�̸� �̹� �־��� ������ false. �׸��� a�� �ε���=0.
			return false;
		else                        // false�̸� ó�� ���� ���ĺ��̹Ƿ� check
		{
			char tmp = str[i];      // ���ĺ��� ������ true�� �ٲ��ش�.
			alphabet[str[i] - 'a'] = true;

			while (1)
			{
				if (tmp != str[++i])// ���� ���ĺ��� �ٸ� ���ĺ��� �� ������ Ž���Ѵ�.
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

// �Ѽ� ������ Ǭ ��İ� �����ϴ�.
// bool���� ��ȯ�ϴ� �Լ��� ����� main�Լ����� ���̸� ����ǰ� �����̸� ������� �ʵ��� �ϴ� ���.