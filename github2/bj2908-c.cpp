#include <iostream>
#include <string>

using namespace std;

// �����ذ���
// ���ڿ��� �Է��� �ް� ù ��° �ε����� �� ��° �ε��� ��ȯ.
// �������� �̹� ���ڸ� ����� ������.
// ��ȯ�� ���� ���ο� ������ �����ϰ� �� �������� ��.

// �� ���� ���� ���� �� �ڸ� ��.
// ������ �ε����� �� ��° �ε����� ���� ���Ѵ�.
// ���ڿ� ���Լ� strcmp�� �ٸ� �Լ��� �̿��� �� ���� �� ����.

// �� Ǯ��
// ���� �ܼ��ѵ� �ڵ� ���̰� ���.
// if�� else if �� �����ؼ� ����ϼ�. else if �ڸ��� if ������
// num1���� ù ��° if���� ������ ���ϸ鼭 ���� ���� �Ǳ� ������
// �� ��° if(else if)�� ���� �ѹ� �� ������ �����ϱ� ������
// �� �� ��� ��µȴ�.

/*int main(void)
{
	string num1, num2;
	cin >> num1 >> num2;

	if (num1[2] > num2[2])
		for (int i = 2; i >= 0; i--)
			cout << num1[i];
	else if (num1[2] < num2[2])
		for (int i = 2; i >= 0; i--)
			cout << num2[i];
	else
	{
		if (num1[1] > num2[1])
			for (int i = 2; i >= 0; i--)
				cout << num1[i];
		else if (num1[1] < num2[1])
			for (int i = 2; i >= 0; i--)
				cout << num2[i];
		else
		{
			if (num1[0] > num2[0])
				for (int i = 2; i >= 0; i--)
					cout << num1[i];
			else if (num1[0] < num2[0])
				for (int i = 2; i >= 0; i--)
					cout << num2[i];
		}
	}
	return 0;
}*/

// others
// �̰� �ȴٰ�?
// ���ڿ� ����Ȱ��.
int main(void)
{
	string x, y;
	cin >> x >> y;

	string bigger;   // ���ο� �� ���ڿ��� �����Ѵ�.

	for (int i = 2; i >= 0; i--) {
		if (x[i] > y[i]) {
			bigger = x; break; // ��.. �̰ź��� x�� ���ڿ��� bigger�� ���� �����ع����� ��.
		}
		else if (x[i] < y[i]) {
			bigger = y; break;
		}
	}  // �� �� �������� �ʴ� ��� i--�Ͽ� ���� �� ����.
	cout << bigger[2] << bigger[1] << bigger[0];
	return 0;
}