#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

// 범위가 커서 반복문으로 하면 시간초과 발생

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
			max++;					// 만족하는 max값을 찾아도 마지막에 한번 더 더해지기 때문에
		max--;						// 여기서 한번 빼준다.
		move = 2 * max - 1;			// 
		long long rem = y - x - max * max;
		rem = (long long)ceil((double)rem / (double)max);
		move += rem;
		printf("%lld\n", move);
	}
	return 0;
}