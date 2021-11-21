#include <iostream>
#include <cstring>

using namespace std;

// 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 
// 단, 대문자와 소문자를 구분하지 않는다.

// 배열을 만들고 배열의 인덱스를 (int)str[i] 이런식으로 하면 cnt++; 가능.
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