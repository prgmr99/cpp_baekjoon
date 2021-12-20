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
		if (cnt == 2)   // 자기 자신과 1밖에 없다는 것
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
		if (input[i] == 1)  // 입력값이 1이면 입력받은 수의 개수에서 하나씩 제거
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
// 에라토스테네스의 접근 방법: 효율적이고 빠른 계산 가능
// 에라토스테네스의 소수 필요충분조건은 2보다 크면서 자기 자신의
// 제곱근까지의 수에 나눠지지 않는 수.
// 즉, 입력값의 제곱근까지 반복문을 돌려 소수 판별

// 아래의 코드와 같이도 활용할 수 있다.
// 백준 문제의 해설은 아니지만 이런 식으로 풀 수 있다는 것도 참고.
/*bool isPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			cout << "소수 아님";
			return false;
		}
	}
	cout << "소수";
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