#include <iostream>

using namespace std;

/*int main()
{
	int n;
	cin >> n;
	char *number;

	number[0] = '0';
	number[1] = '1';

	for (int j = 0; j < 6 * j + 6; j++) // j의 범위 수정필요.
	{
		for (int i = 0; i < 6 * j + 6; i++)
			number[j] = '2';
	}
}*/ 
// 단순 반복문을 통한 계산 방식은 시간 초과 발생.

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
// 1. 계속 숫자를 올리면서 num을 초과하면 거기서 스탑!
// 2. 반복문에서 하나의 문자만 사용한다는 고정관념 깨라.