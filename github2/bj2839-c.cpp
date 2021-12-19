#include <iostream>

using namespace std;

/*int main(void)
{
	int num, result, lweight;
	cin >> num;

	int fnum, tnum;
	fnum = num / 5; // 5kg 박스의 최대 사용 개수
	tnum = num / 3; // 3kg 박스의 최대 사용 개수

	while (fnum >= 0)
	{
		result = 0, lweight = 0;
		if (fnum > 0)
		{
			lweight = num - 5 * fnum; // 5kg 박스 사용 후 남은 무게
			result = fnum;
		}
		else
			lweight = fnum;

		result += tnum;
		lweight = lweight % 3;
		if (lweight == 0)
		{
			cout << result << endl;
			break;
		}
		fnum--;
	}
	if (lweight != 0)
		cout << "-1" << endl;
	return 0;
}*/

int main(void) {
	int kg;
	cin >> kg;

	int fnum;
	int tnum = 0;  // 물론, 여기서 tnum을 초기화 해놓으면 좋지만 굳이 하지 않아도 밑에서 해결된다.
	fnum = kg / 5;

	while (1) {
		if (fnum < 0) {
			cout << "-1" << endl;
			return 0;
		}
		if ((kg-(5*fnum))%3==0) {
			tnum = (kg - (5 * fnum)) / 3;
			break;  // 바로 반복문 탈출.
		}
		fnum--;  // 3의 배수만 해당하면 줄여가면서 두 번째 조건문에 들어간다. f11로 돌려보셈
	}
	cout << fnum + tnum << endl;
	return 0;
}
// 좋은 코드인가? -> 좋은 코드 맞네

/*int main(void) {
	int kg;
	cin >> kg;

	int fnum = kg / 5;
	int tnum = 0;

	while (fnum >= 0) {
		if (kg % 5 == 0) {
			cout << fnum << endl;
			break;
		}
		if ((kg - (5 * fnum)) % 3 == 0) {
			tnum = (kg - (5 * fnum)) / 3;
			cout << fnum + tnum << endl;
			break;
		}
		fnum--;
	}
	if (fnum < 0)
		cout << "-1" << endl;
	return 0;
}*/