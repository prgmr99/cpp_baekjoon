#include <iostream>
#include <cstring>
#include <string>

using namespace std;

// ���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. 
// ��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.


// ���� Ǯ��
// �迭�� ����� �迭�� �ε����� (int)str[i] �̷������� �ϸ� cnt++; ����.
/*int arr[122];

int main(void)
{
	int max = 0;
	int cnt = 0;
	string str;

	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		arr[(int)str[i]] += 1;
	}

	for (int j = 0; j < 122; j++)
	{
		if (max < arr[j])
			max = arr[j];
	}

	for (int j = 0; j < 122; j++)
	{
		if (arr[j] == max)
			cnt++;
	}

	if (cnt >= 2)
		cout << '?' << endl;
	else
		cout << max << endl;
	return 0;
}*/
// ���ʿ� ������ �߸� �а� Ǯ����.
// ���� ���� ���� ���ĺ��� �빮�ڸ� ����ؾ��Ѵ�.

int main(void)
{
	string str;
	int arr[26] = { 0, };
	int max_cnt = 0;
	int index = 0;
	int count = 0;

	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		int n = str.at(i);   // i�� ��ġ�ϴ� ���ڸ� ��ȯ�ϴ� �Լ�.

		if (n < 97)			 // �빮�� �ҹ��ڸ� �������� �ʱ� ����
			arr[n - 65]++;   // ���ڰ� ������ ���� ������Ű�� max���� ã�´�.
		else
			arr[n - 97]++;  
	}

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] > max_cnt)
		{
			max_cnt = arr[i];
			index = i;       // max���� ���ڸ� ����ϱ� ���� index�� i�� ���� �����ߴ�.
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == max_cnt)   // �� �κ��� ���� ���� ����.
		{
			count++;
			if (count >= 2)
			{
				cout << "?" << endl;
				return 0;
			}
		}
	}
	cout << (char)(index + 65) << endl;

	return 0;
}