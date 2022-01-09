#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int FindSeries(int n) {
	int i = 666;
	int series = 0;
	string target;
	while (1) {
		target = to_string(i);
		for (int j = 0; j < target.length() - 2; j++) {
			if (target[j] == '6' && target[j + 1] == '6' && target[j + 2] == '6') {
				series++;
				if (series == n)
					return i;
				break; // �ؿ� i++�� ���ؼ� i�� ��� �����ϱ� ������
			}		   // �ᱹ 4�ڸ������� ���� ���� '6666','66666' ���� ���� series�� �ѹ� �� �����ϱ� ������ break�� �ɾ���� �Ѵ�.
		}
		i++;
	}
}

int main(void) {
	int num;
	cin >> num;
	cout << FindSeries(num);
	return 0;
}

// ��� ��� �߿��� ���� ���� ��츦 ã�ƾ� �Ѵ�.
// �� ���� ã�� ã�� ���� ���ο� ������ �����Ѵ�.
// ������ ���ڸ� ���� ����� ���� ��� ó������?
// �׳� 666�� ���ִ� ��츦 ã���� �ȴ�.