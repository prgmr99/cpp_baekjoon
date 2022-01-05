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

// 가장 작은 것을 어떻게 구하지?
// return 0의 의미 int 0을 반환한다는 뜻이나,
// 운영체제에서 현재 실행 중인 함수를 종료하기 위해 사용.
// 처음에 나오는 값이 가장 작은 수이므로 굳이 끝까지 함수를 돌릴 필요가 없다.
// 그러므로 return 0을 사용하여 값이 나오게 되면 즉시 함수를 종료한다.