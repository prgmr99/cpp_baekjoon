#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, temp;
	cin >> n;
	int sum = 0;
	for (int i = 1; i < n; i++) {
		sum = i;
		temp = i;
		while (temp) {
			sum += temp % 10;
			temp /= 10;
		}
		if (sum == n) {
			cout << i << '\n';
			return 0;
		}
	}
	cout << "0" << '\n';
	return 0;
}

// ���� ���� ���� ��� ������?
// return 0�� �ǹ� int 0�� ��ȯ�Ѵٴ� ���̳�,
// �ü������ ���� ���� ���� �Լ��� �����ϱ� ���� ���.
// ó���� ������ ���� ���� ���� ���̹Ƿ� ���� ������ �Լ��� ���� �ʿ䰡 ����.
// �׷��Ƿ� return 0�� ����Ͽ� ���� ������ �Ǹ� ��� �Լ��� �����Ѵ�.