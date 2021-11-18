#include <iostream>
#include <string>

using namespace std;

/*int main()
{
	char words[10];

	char alpha[27];
	cin >> words;

	for (int i = 0; i < 26; i++)
	{
		alpha[i] = (char)(97 + i);
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 27; j++)
		{
			if (words[i] == alpha[j])
				cout << i;
			else
			{
				if (words[i] == alpha[j])
					cout << ' ' << -1;
			}
		}
		cout << ' ';
	}
	return 0;
}*/

int main(void)
{
	string str;
	cin >> str;

	string str1 = ("abcdefghijklmnopqrstuvwxyz");
	for (int i = 0; i < str1.size(); i++)
	{
		cout << (int)str.find(str1[i]) << " ";  // int로 형변환을 하지 않으면 원하는 값이 나오지 않는다.
	}
	return 0;
}