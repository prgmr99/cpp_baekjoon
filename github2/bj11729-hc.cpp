#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int start, int mid, int end, int n) {
	if (n == 1) {
		cout << start << " " << end << "\n";
	}
	else {
		hanoi(start, end, mid, n - 1);
		cout << start << " " << end << "\n";
		hanoi(mid, start, end, n - 1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cout << (int)pow(2, n) - 1 << '\n';
	hanoi(1, 2, 3, n);
}


/*ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);*/

// �ڵ��׽�Ʈ�� �ϸ� ������� �ӵ� ������ ���� Fail�� �߻��� ��,
// ������ ���� ���� ���� �ڵ带 �Ἥ �ذᰡ��.

// cin�� cout�� default�� tie�Ǿ� �ִ�.
// tie�Ѵٴ� ���� �� ���� stream�� sync�Ǿ� �ֱ� ������ �� ��Ʈ������ �ٸ� ��Ʈ���� �۾� ��û�� �ϰ� �Ǹ�,
// �۾��ߴ� ������ flush�Ѵٴ� �ǹ��̴�.
// flush�� buffer�� �׾Ƶ� �����͸� ��� �������� ���� ���Ѵ�.