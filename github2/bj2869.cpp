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

// �ݺ����� ������� �ʰ� �� ������ ������ �� �ִ� �ڵ带 �����غ���.
// �ݺ����� ����ϸ� ������ �ð��ʰ��ϴ� �����̴�.

// ���� ó���� �����ߴ� ���(�Ʒ� �ڵ�)�� �� ���� �ڵ��̴�. 
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