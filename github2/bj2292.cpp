#include <iostream>

using namespace std;

/*int main()
{
	int n;
	cin >> n;
	char *number;

	number[0] = '0';
	number[1] = '1';

	for (int j = 0; j < 6 * j + 6; j++) // j�� ���� �����ʿ�.
	{
		for (int i = 0; i < 6 * j + 6; i++)
			number[j] = '2';
	}
}*/ 
// �ܼ� �ݺ����� ���� ��� ����� �ð� �ʰ� �߻�.

int main()
{
	int num;
	cin >> num;
	int i = 0;
	for (int sum = 2; sum <= num; i++) 
		sum += 6 * i;
	
	if (num == 1)
		cout << 1;

	cout << i;
	return 0;
}
// 1. ��� ���ڸ� �ø��鼭 num�� �ʰ��ϸ� �ű⼭ ��ž!
// 2. �ݺ������� �ϳ��� ���ڸ� ����Ѵٴ� �������� ����.