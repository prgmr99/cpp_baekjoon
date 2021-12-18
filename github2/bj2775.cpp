#include <iostream>

using namespace std;

// 재귀함수를 사용해보자.

int PeopleInHouse(int a, int b)
{
	if (a == 0)
	{
		if (b == 1)
			return 1;
		else
			return b * (b + 1) / 2;
	}
	else
		PeopleInHouse(a - 1, b) + PeopleInHouse(a, b - 1);
}


int main(void)
{
	int tcase, a, b;
	cin >> tcase;
	cin >> a;
	cin >> b;
	cout << PeopleInHouse(a, b) << endl;
	return 0;
}