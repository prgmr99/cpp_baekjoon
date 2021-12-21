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

// 풀리기는 하는데 시간초과 발생함.

int main(void) {
	int M, N;
	int rt;
	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		rt = sqrt(i);
		if (rt == 1 && i != 1) {	// 2,3인 경우
			cout << i << '\n';
			continue;
		}
		if (i % 2) {	// 홀수일 경우, 짝수인 경우에는 이미 2의 배수이기 때문에 제외.
			for (int j = 2; j <= rt; j++) {
				if (!(i % j))    // 나누어 떨어지면 소수가 아니기 때문에 for문 break. 다음 i로 넘어간다.
					break;
				if (j == rt) {
					cout << i << '\n';
				}
			}
		}
	}
}