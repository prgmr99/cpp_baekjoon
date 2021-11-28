#include <iostream>
#include <string>

using namespace std;

// 문제해결방법
// 문자열로 입력을 받고 첫 번째 인덱스와 세 번째 인덱스 교환.
// 문제에서 이미 세자리 수라고 정해줌.
// 교환한 값을 새로운 변수에 저장하고 그 변수들을 비교.

// 두 수는 같지 않은 세 자리 수.
// 마지막 인덱스와 두 번째 인덱스를 각각 비교한다.
// 문자열 비교함수 strcmp나 다른 함수를 이용할 수 있을 것 같다.

// 내 풀이
// 조금 단순한데 코드 길이가 길다.
// if와 else if 잘 구분해서 사용하셈. else if 자리에 if 넣으면
// num1값이 첫 번째 if문을 지나고 변하면서 작은 값이 되기 때문에
// 두 번째 if(else if)에 들어가면 한번 더 조건을 만족하기 때문에
// 두 수 모두 출력된다.

/*int main(void)
{
	string num1, num2;
	cin >> num1 >> num2;

	if (num1[2] > num2[2])
		for (int i = 2; i >= 0; i--)
			cout << num1[i];
	else if (num1[2] < num2[2])
		for (int i = 2; i >= 0; i--)
			cout << num2[i];
	else
	{
		if (num1[1] > num2[1])
			for (int i = 2; i >= 0; i--)
				cout << num1[i];
		else if (num1[1] < num2[1])
			for (int i = 2; i >= 0; i--)
				cout << num2[i];
		else
		{
			if (num1[0] > num2[0])
				for (int i = 2; i >= 0; i--)
					cout << num1[i];
			else if (num1[0] < num2[0])
				for (int i = 2; i >= 0; i--)
					cout << num2[i];
		}
	}
	return 0;
}*/

// others
// 이게 된다고?
// 문자열 복사활용.
int main(void)
{
	string x, y;
	cin >> x >> y;

	string bigger;   // 새로운 빈 문자열을 생성한다.

	for (int i = 2; i >= 0; i--) {
		if (x[i] > y[i]) {
			bigger = x; break; // 아.. 이거보면 x의 문자열을 bigger에 완전 복사해버리는 것.
		}
		else if (x[i] < y[i]) {
			bigger = y; break;
		}
	}  // 둘 다 만족하지 않는 경우 i--하여 다음 수 진행.
	cout << bigger[2] << bigger[1] << bigger[0];
	return 0;
}