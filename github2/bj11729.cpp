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

// 코딩테스트를 하며 입출력의 속도 문제로 인해 Fail이 발생할 때,
// 원리는 몰라도 위와 같은 코드를 써서 해결가능.

// cin과 cout은 default로 tie되어 있다.
// tie한다는 것은 두 개의 stream이 sync되어 있기 때문에 한 스트림에서 다른 스트림이 작업 요청을 하게 되면,
// 작업했던 내용을 flush한다는 의미이다.
// flush란 buffer에 쌓아둔 데이터를 모두 내보내는 것을 말한다.