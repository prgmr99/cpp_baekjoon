#include <iostream>

using namespace std;

int main(void)
{
	int tcase, h, w, n;
	int num1, num2;
	cin >> tcase;
	
	for (int i = 0; i < tcase; i++)
	{
		cin >> h >> w >> n;
		num1 = n / h;
		num2 = n % h;
		/*if (num2 == 0 && num1 < 10)
		{
			cout << h << "0" << num1 << endl;
		}
		else if (num2 == 0 && num1 >= 10)
		{
			cout << h << num1 << endl;
		}
		else if (num2 != 0 && num1+1 < 10)
		{
			cout << num2 << "0" << num1 + 1 << endl;
		}
		else if (num2 != 0 && num1+1 >= 10)
		{
			cout << num2 << num1 + 1 << endl;
		}*/

		if (num2 > 0)
			num1++;
		else
			num2 = h;
		cout << num2 * 100 + num1 << endl;  // �ξ� ����� �ڵ�. ���� �ڵ带 ����� �ڵ�.
	}
	return 0;
	



	/*int cnt = 0;
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			cnt++;
		}
	}*/ // 2������ �迭�� �������� �ʴ� �̻� �ʿ���� �ڵ�.
}

// ���� ���� �ݺ����� ����� �ʿ䰡 ����.
// ���� ����� �Ÿ� 2���� �迭�� �̿��ϴ� ���� �� ���� ����?
// �ֳ��ϸ� �� cnt�� ������ �濡 �Ҵ��ϴ� ������ �ϴ� ���� �ƴϰ�
// �׳� cnt���� h*w�� ���� �� �ֱ� ������ �� �ʿ䰡 ���� �ڵ���.
// ���� Ȱ���ҰŸ� 2�����迭�� ������ ������ �濡 cnt�� �Ҵ��ϴ� ���� �� �����غ���.

