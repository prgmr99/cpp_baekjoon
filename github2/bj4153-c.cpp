#include <iostream>

using namespace std;

int main(void) {
	int a,b,c;
	int temp = 0;
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) //&& num[1] == '0' && num[2] == '0') �ʿ����. �ﰢ�������� �� ���� 0�̸� �ﰢ���� �ƴϱ� ����
			return 0;
		if (a > b) {
			temp = b;
			b = a;
			a = temp;
		}
		if (b > c) {
			temp = c;
			c = b;
			b = temp;
		}
		if (c * c == a * a + b * b)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}
// ����� �ߵȴ�. �ð��ʰ� �߻�.
// �����ߴµ� ����ѵ�?