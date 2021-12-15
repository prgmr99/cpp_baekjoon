#include <iostream>

using namespace std;

int main(void)
{
	int up, down, height, temp;
	cin >> up >> down >> height;

	for (int i = 1;; i++)
	{
		temp = up;
		up *= i;
		down *= -i;
		/*if (i == 1) {
			num1 = height - up;
			num2 = up + down;
		}*/

		/*if (num1 % num2 == 0) {
			day = num1 / num2;
		}
		else {
			day = num1 / num2 + 1;
		}*/

		if ((up + down + temp) >= height)
		{
			cout << i + 1 << endl;
			break;
		}
	}
	return 0;
}