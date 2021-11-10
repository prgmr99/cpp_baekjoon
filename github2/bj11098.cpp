#include <iostream>

using namespace std;

int main()
{
	int tcase = 0;
	cin >> tcase;

	int pnum = 0;
	int cost;
	char pname[20];
	int max = 0;
	char ename[20];

	for (int i = 0; i < tcase; i++)
	{
		cin >> pnum;
		for (int j = 0; j < pnum; j++)
		{
			cin >> cost >> pname;
			if (cost > max) {
				max = cost;
				*ename = *pname;
			}
		}
		cout << *pname << endl;
	}
	return 0;
}

/*int main()
{
	int i, j, n, p;
	char a[100][21] = {};
	cin >> n;

	for (i = 0; i < n; i++)
	{
		int max = 0, cost, l;
		cin >> p;
		for (j = 0; j < p; j++)
		{
			cin >> cost;
			cin >> a[j];

			if (cost > max)
			{
				max = cost;
				l = j;
			}
		}
		cout << a[l] << endl;
	}
	return 0;
}*/