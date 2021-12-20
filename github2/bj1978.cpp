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

int main(void) {
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
}