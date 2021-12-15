#include <iostream>

using namespace std;

int main(void)
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
}