#include <iostream>
#include <cstring>

using namespace std;

// ���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. 
// ��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.

// �迭�� ����� �迭�� �ε����� (int)str[i] �̷������� �ϸ� cnt++; ����.
int arr[122];

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
}