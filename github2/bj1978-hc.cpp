#include <iostream>
#include <cmath>

using namespace std;

/*int main(void) {
	int n;
	cin >> n;

	int sum = 0, cnt = 0;
	int num = 0;
	for (int i = 0; i < n; i++) {
		cin >> num;
		for (int j = 1; j <= num; j++) {
			if (num % j == 0)
				cnt++;
		}
		if (cnt == 2)   // �ڱ� �ڽŰ� 1�ۿ� ���ٴ� ��
			sum++;
		cnt = 0;
	}
	cout << sum << endl;
	return 0;
}*/

/*int main(void) {
	int num;
	cin >> num;
	int cnt = num;
	int input[100] = { 0, };
	for (int i = 0; i < num; i++) {
		cin >> input[i];
		if (input[i] == 1)  // �Է°��� 1�̸� �Է¹��� ���� �������� �ϳ��� ����
			cnt--;
	}

	for(int i=0;i<num;i++)
		for (int j = 2; j <= sqrt(input[i]); j++)
		{
			if (input[i] % j == 0)
			{
				cnt--;
				break;
			}
		}
	cout << cnt;
	return 0;
}*/
// �����佺�׳׽��� ���� ���: ȿ�����̰� ���� ��� ����
// �����佺�׳׽��� �Ҽ� �ʿ���������� 2���� ũ�鼭 �ڱ� �ڽ���
// �����ٱ����� ���� �������� �ʴ� ��.
// ��, �Է°��� �����ٱ��� �ݺ����� ���� �Ҽ� �Ǻ�

// �Ʒ��� �ڵ�� ���̵� Ȱ���� �� �ִ�.
// ���� ������ �ؼ��� �ƴ����� �̷� ������ Ǯ �� �ִٴ� �͵� ����.
/*bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			cout << "�Ҽ� �ƴ�";
			return false;
		}
	}
	cout << "�Ҽ�";
	return true;
}

int main(void) {
	for (int i = 2; i <= 100; i++) {
		cout << i << ' ';
		isPrime(i);
		cout << endl;
	}
	return 0;
}*/