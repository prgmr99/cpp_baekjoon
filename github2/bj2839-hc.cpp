#include <iostream>

using namespace std;

/*int main(void)
{
	int num, result, lweight;
	cin >> num;

	int fnum, tnum;
	fnum = num / 5; // 5kg �ڽ��� �ִ� ��� ����
	tnum = num / 3; // 3kg �ڽ��� �ִ� ��� ����

	while (fnum >= 0)
	{
		result = 0, lweight = 0;
		if (fnum > 0)
		{
			lweight = num - 5 * fnum; // 5kg �ڽ� ��� �� ���� ����
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
	int tnum = 0;  // ����, ���⼭ tnum�� �ʱ�ȭ �س����� ������ ���� ���� �ʾƵ� �ؿ��� �ذ�ȴ�.
	fnum = kg / 5;

	while (1) {
		if (fnum < 0) {
			cout << "-1" << endl;
			return 0;
		}
		if ((kg-(5*fnum))%3==0) {
			tnum = (kg - (5 * fnum)) / 3;
			break;  // �ٷ� �ݺ��� Ż��.
		}
		fnum--;  // 3�� ����� �ش��ϸ� �ٿ����鼭 �� ��° ���ǹ��� ����. f11�� ��������
	}
	cout << fnum + tnum << endl;
	return 0;
}
// ���� �ڵ��ΰ�? -> ���� �ڵ� �³�

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