#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	int testCase = 0;
	int count = 0;
	int docNum, docPos, imp;
	cin >> testCase;

	// testCase만큼 loop 진행
	for (int i = 0; i < testCase; i++) {
		count = 0;
		cin >> docNum >> docPos;
		// 문서 수와 궁금한 문서 위치 받기

		queue<pair<int, int>> q;
		priority_queue<int> pq;
		// queue와 우선순위 queue

		for (int j = 0; i < docNum; j++) {
			cin >> imp;
			q.push({ j, imp });
			pq.push(imp);
		}
		// 중요도를 받고 queue에 넣기

		// queue가 빌 때까지 while문 돌리기
		while (!q.empty()) {
			int k = q.front().first;
			int v = q.front().second;
			// queue에서 들어간 것 중 1, 2번째 것을 k,v에 대입
			q.pop();

			// v가 pq의 top과 동일하면 pop시키고 count세기
			if (pq.top() == v) {
				pq.pop();
				count++;

				// 전에 pop된 요소가 궁금한 문서라면 몇번이나 count했는지 print
				if (k == docPos) {
					cout << count << '\n';
					break;
				}
			}
			else {
				// 아니면 다시 queue 뒤로 넣기
				q.push({ k,v });
			}
		}
	}
}

// priority_queue는 들어간 순서와 상관없이 높은 숫자 순서로 숫자를 저장해 둠.
// 큐가 빌 때까지 현재 중요도와 우선순위 큐에 있는 중요도를 확인하고 
// 현재 인덱스와 찾을 인덱스 값이 일치할 때까지 개수를 증가시키며 반복.