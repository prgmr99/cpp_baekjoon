#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


// ���� Ǯ��(�� ����ѵ� �����絥..)
// �ð��ʰ��� �߻����� ���� �ִ�. �ݺ��� ������� ����.
/*int main()
{
	int fcost=0;
	int hcost=0;
	int ncost=0;
	cin >> fcost >> hcost >> ncost;

	for (int i = 1;; i++)
	{
		// ���ͺб����� �������� �ʴ´� = ��� ���ظ� ���ų� ��� �̵��� ���� ��.
		// �ܼ��� ó���Ӹ��� �ƴ϶� ������ ���� �����̶�� ���� �����ؾ���.
		// ���������� ���� y=hcostx+fcost�� y=ncostx�� ����� �Ǵ��� �� ����.
		if (hcost >= ncost)
		{
			cout << -1 << endl;
			break;
		}

		if (i == 1)
		{
			if ((fcost + (hcost * i)) < ncost * i)
			{
				cout << -1 << endl;
				break;
			}
		}

		if ((fcost + (hcost*i)) == ncost*i)
		{
			cout << i+1 << endl;
			break;
		}
	}

	return 0;
}*/

int main(void)
{
	int a, b, c;
	int n = 1;
	cin >> a >> b >> c;

	if (b >= c) {
		cout << -1;
		return 0;
	}

	cout << a / (c - b) + 1; // a=(c-b)*i ���� ���� ��.
	return 0;
}