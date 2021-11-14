#include <iostream>

using namespace std;

int main()
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
}