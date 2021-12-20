#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string n1, n2, res, ans;  // ���� ũ�� ������, ���ڿ��� �Է¹���
	cin >> n1 >> n2;
	int car = 0;   // �ø���
	int onesize = n1.size();  // ù ��° ���� �ڸ���
	int twosize = n2.size();  // �� ��° ���� �ڸ���
	while (onesize > 0 || twosize > 0)
	{
		int nn1 = 0;  // ù ��° ���� �ڸ��� �� �ϳ�(���� �ڸ����� ����)
		if (onesize > 0)
			nn1 = n1[--onesize] - '0';  // ���� 0�� ���ָ� �Լ��� ���� �ʰ� ���ڸ� ���ڷ� �ٲٱ� ����
		int nn2 = 0;
		if (twosize > 0)
			nn2 = n2[--twosize] - '0';
		int cur = nn1 + nn2 + car;
		car = cur / 10;  // �ø��� ����
		cur %= 10;
		char ccar = cur + '0';  // ���ڷ� ��ȯ
		res += ccar;
	}
	if (car > 0)  // �ø����� ���������� �����ִٸ�
		res += car + '0';
	for (int i = res.length() - 1; i >= 0; i--)
		cout << res[i];

	return 0;
}