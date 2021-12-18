#include <iostream>

using namespace std;

// 재귀함수를 사용해보자.

int PeopleInHouse(int a, int b)
{
	if (a == 0 || b == 1)
	{
		if (b != 1)
			return b;
		else
			return 1;
	}
	else
		return PeopleInHouse(a - 1, b) + PeopleInHouse(a, b - 1);
}


int main(void)
{
	int tcase, a, b;
	cin >> tcase;
	
	for (int i = 0; i < tcase; i++)
	{
		cin >> a;
		cin >> b;
		cout << PeopleInHouse(a, b) << endl;
	}
	return 0;
}