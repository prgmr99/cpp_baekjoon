#include <iostream>

using namespace std;

int main()
{
	int num1, num2, sum = 0, sq, i = 1, min = 0;
	cin >> num1 >> num2;

	while ((sq = i * i) <= num2)
	{
		if (sq >= num1)
		{
			sum += sq;
			if (min == 0) 
				min = sq;  // ó������ 0������ sq�� ���� ��� ������Ʈ �ϸ鼭 min�� ���� ���Ѵ�.
		}
		++i;
	}
	if (sum == 0)
		cout << -1 << endl;
	else {
		cout << sum << endl;
		cout << min << endl;
	}
}

// max, min�� �۱� ������ 1�� �ø��鼭 ã�� ���� ����.