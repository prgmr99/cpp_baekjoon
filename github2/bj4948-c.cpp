#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int num;
	int rt, cnt;
	while (1) {
		cin >> num;
		cnt = 0;   // �̰Ÿ� �׳� cnt��� �ؿ� ������ cnt�� �������� ������ ���̾ ���� �߻�.
		if (num == 0)
			break;
		
		for (int i = num + 1; i <= num * 2; i++) {
			rt = sqrt(i);   
			if (rt == 1 && i != 1) {  // rt�� int���̱� ������, �˻� ���� i�� 1,2,3�̶�� rt���� 1�� ����� ��.
				cnt++;				  // 1�� �Ҽ��� �ƴϱ� ������ 1�� ���ܽ�Ű�� ������ �ִ´�.
				continue;			  // continue ���� -> ������ �ݺ� �κ� ����x �ٷ� ���� i�� �Ѿ��.
			}
			if (i % 2) {
				for (int j = 2; j <= rt; j++) {
					if (!(i % j))
						break;
					if (j == rt)
						cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}