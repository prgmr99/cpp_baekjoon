#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

// ������ Ŀ�� �ݺ������� �ϸ� �ð��ʰ� �߻�

/*int main(void) {

	int tcase;
	cin >> tcase;
	int x, y;

	for (int i = 0; i < tcase; i++) {
		cin >> x >> y;
		for (int j = x; j <= y; j++) {

		}
	}
}*/

int main(void) {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		long long x, y;
		long long move, max = 0;
		cin >> x >> y;
		while (max * max <= y - x)
			max++;					// �����ϴ� max���� ã�Ƶ� �������� �ѹ� �� �������� ������
		max--;						// ���⼭ �ѹ� ���ش�.
		move = 2 * max - 1;			// 
		long long rem = y - x - max * max;
		rem = (long long)ceil((double)rem / (double)max);
		move += rem;
		printf("%lld\n", move);
	}
	return 0;
}