#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num, x, cnt = 0;
	cin >> num;
	vector<int> v(num);
	int temp;
	for (int i = 0; i < num; i++) {
		cin >> x;
		v[i] = x;
	}
	for (int i = 0; i < num; i++) {
		temp = v[i];
		for (int j = 0; j < num; j++) {
			if (temp > v[j])
				cnt++;
		}
		cout << cnt << ' ';
		cnt = 0;
	}
	return 0;
}*/
// 시간초과 발생.
// 중복을 허용하지 않고 처리해야함.

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> v(n);  // 원본 벡터
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	vector<int> cv(v);  // 원본 벡터를 복사하여 중복된 수를 제거하고 정렬을 시행할 벡터
	sort(cv.begin(), cv.end());  // 오름차순 정렬
	cv.erase(unique(cv.begin(), cv.end()), cv.end());
	for (int i = 0; i < n; i++) {
		// i번째 요소값의 위치 it
		auto it = lower_bound(cv.begin(), cv.end(), v[i]);
		// it에서 cv벡터의 시작 주소값을 빼준 값이 답
		cout << it - cv.begin() << ' ';
	}
	return 0;
}

// lower_bound: 이진 탐색 방법 기반, 선행 조건으로는 데이터가 정렬되어 있어야 한다.
// 데이터 내 특정 K값보다 같거나 큰 값이 처음 나오는 위치를 리턴해주는 알고리즘.

// auto 키워드는 초기화 시에 초기화 값에 맞춰 자동으로 자료형을 판단하는 기능을 갖는다.
// 선언만하고 초기화를 하지 않으면 사용이 불가능하다.

// unique 함수
// vector 배열에서 중복되지 않는 원소들을 앞에서부터 채워나가는 함수.
// algorithm헤더에 존재.
// 중복되지 않는 원소들을 앞에서부터 채워나가는 역할을 하기 때문에 남은 뒷부분은 그대로 vector원소값이 존재한다.
// 중복된 값 모두 지움->줄어든 자리에 중복되지 않는 원소 다 채움->남는 자리 수만큼 기존의 배열 요소 뒷부분을 그대로 가져온다.
// unique 함수는 중복되어 밀리게 된 원소의 시작 부분의 주소을 리턴한다. (정렬 다 시키고 처음 나오는 수의 주소)

// erase 함수
// vector 배열에서 특정 원소를 삭제하는 함수.
// v.erase(v.begin()+s, v.begin()+e) 명령어를 입력하면 [s,e) 원소가 삭제된다.
// 즉, 시작지점은 닫힌구간, 끝나는 지점은 열린 구간으로 삭제된다.