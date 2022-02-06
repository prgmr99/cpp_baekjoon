#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	int testCase = 0;
	int count = 0;
	int docNum, docPos, imp;
	cin >> testCase;

	// testCase��ŭ loop ����
	for (int i = 0; i < testCase; i++) {
		count = 0;
		cin >> docNum >> docPos;
		// ���� ���� �ñ��� ���� ��ġ �ޱ�

		queue<pair<int, int>> q;
		priority_queue<int> pq;
		// queue�� �켱���� queue

		for (int j = 0; i < docNum; j++) {
			cin >> imp;
			q.push({ j, imp });
			pq.push(imp);
		}
		// �߿䵵�� �ް� queue�� �ֱ�

		// queue�� �� ������ while�� ������
		while (!q.empty()) {
			int k = q.front().first;
			int v = q.front().second;
			// queue���� �� �� �� 1, 2��° ���� k,v�� ����
			q.pop();

			// v�� pq�� top�� �����ϸ� pop��Ű�� count����
			if (pq.top() == v) {
				pq.pop();
				count++;

				// ���� pop�� ��Ұ� �ñ��� ������� ����̳� count�ߴ��� print
				if (k == docPos) {
					cout << count << '\n';
					break;
				}
			}
			else {
				// �ƴϸ� �ٽ� queue �ڷ� �ֱ�
				q.push({ k,v });
			}
		}
	}
}

// priority_queue�� �� ������ ������� ���� ���� ������ ���ڸ� ������ ��.
// ť�� �� ������ ���� �߿䵵�� �켱���� ť�� �ִ� �߿䵵�� Ȯ���ϰ� 
// ���� �ε����� ã�� �ε��� ���� ��ġ�� ������ ������ ������Ű�� �ݺ�.