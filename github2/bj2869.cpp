#include <iostream>

using namespace std;

/*int main(void)
{
	int up, down, height, temp;
	cin >> up >> down >> height;

	temp = up;
	for (int i = 1;; i++)
	{
		up *= i;
		down *= i;
		
		if ((up - down + temp) >= height)
		{
			cout << i + 1 << endl;
			break;
		}
	}
	return 0;
}*/

// 반복문을 사용하지 않고 더 빠르게 구현할 수 있는 코드를 생각해보자.
// 반복문을 사용하면 무조건 시간초과하는 문제이다.

// 내가 처음에 생각했던 방식(아래 코드)이 더 빠른 코드이다. 
int main(void)
{
	int up, down, height;
	cin >> up >> down >> height;

	int day = 1;
	day += (height - up) / (up - down);
	if ((height - up) % (up - down) != 0)
		day++;
	if (up >= height)
		cout << '1';
	else
		cout << day;
	return 0;
}