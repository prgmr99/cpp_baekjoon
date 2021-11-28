#include <iostream>
#include <cstring>
#include <string>

using namespace std;

// 알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 
// 단, 대문자와 소문자를 구분하지 않는다.


// 나의 풀이
// 배열을 만들고 배열의 인덱스를 (int)str[i] 이런식으로 하면 cnt++; 가능.
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
// 애초에 문제를 잘못 읽고 풀었다.
// 가장 많이 적힌 알파벳의 대문자를 출력해야한다.

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
		int n = str.at(i);   // i에 위치하는 문자를 반환하는 함수.

		if (n < 97)			 // 대문자 소문자를 구분하지 않기 위해
			arr[n - 65]++;   // 문자가 있으면 값을 증가시키고 max값을 찾는다.
		else
			arr[n - 97]++;  
	}

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] > max_cnt)
		{
			max_cnt = arr[i];
			index = i;       // max값인 문자를 출력하기 위해 index에 i를 따로 저장했다.
		}
	}

	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == max_cnt)   // 이 부분은 나와 같은 생각.
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