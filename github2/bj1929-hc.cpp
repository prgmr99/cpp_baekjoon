#include <iostream>
#include <cmath>

using namespace std;

/*int main(void) {
	int num1, num2;
	cin >> num1 >> num2;

	int cnt = 0;
	if (num1 == 1)
		cout << "1" << endl;

	for (int i = num1; i <= num2; i++) {
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				cnt++;
			}
		}
		if (cnt == 0)
			cout << i << endl;
		cnt = 0;
	}
	return 0;
}*/

// Ǯ����� �ϴµ� �ð��ʰ� �߻���.

int main(void) {
	int M, N;
	int rt;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		rt = sqrt(i);
		if (rt == 1 && i != 1) {	// 2,3�� ���
			cout << i << '\n';
			continue;
		}
		if (i % 2) {	// Ȧ���� ���, ¦���� ��쿡�� �̹� 2�� ����̱� ������ ����.
			for (int j = 2; j <= rt; j++) {
				if (!(i % j))    // ������ �������� �Ҽ��� �ƴϱ� ������ for�� break. ���� i�� �Ѿ��.
					break;
				if (j == rt) {
					cout << i << '\n';
				}
			}
		}
	}
}