#include <iostream>

using namespace std;

/*int hansoo(int n)
{
	int cnt = 0;
	int total=0;
	int n1, n2, n3;
	
	if (n < 100)
	{
		cnt = n;
		total = cnt;
	}

	else
	{
		///////////////////ù ��° �õ�/////////////////////////
		int sum = 99;

			for (int j = 100; j < n; j++)
			{
				n3 = n % 10;
				n /= 10;
				n2 = n % 10;
				n /= 10;
				n1 = n % 10;    // ������ ���⼭ n�� �پ�� ��. ��, 2�� ����ǰ� �ᱹ n<100������ �����ϸ鼭 total=2�� ����Ǵ� ���̴�.

				n = reNum;
				if (n1 - n2 == n2 - n3)
					cnt++;
			}
			total = sum + cnt;
		////////////////////////////////////////////////////////
		for (int i = 100; i <= n; i++)
		{
			int temp = i;
			n3 = i % 10;
			i /= 10;
			n2 = i % 10;
			i /= 10;
			n1 = i % 10;
			i = temp;

			if (n1 - n2 == n2 - n3)
				cnt++;
		}
		total = 99 + cnt;
	}
	return total;
}

int main(void)
{
	int num;
	cin >> num;
	cout << hansoo(num) << endl;
	return 0;
}*/

bool hansoo(int a)
{
	if (a < 100)
		return true;
	int a1, a2, a3;
	a3 = a / 100;
	a1 = a % 10;
	a2 = a % 100 / 10;
	if (a3 - a2 == a2 - a1)
		return true;
	return false;
}

int main(void)
{
	int N, cnt = 0;
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		if (hansoo(i))     // �� �̷������� �ҿ����ڸ� �̿��ؼ� ��/�������� ���ǹ��� �۵��� �� �ְ� �� �� �ִ�.
			cnt++;
	}
	cout << cnt;
	return 0;
}