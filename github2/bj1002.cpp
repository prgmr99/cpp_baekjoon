#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

/*int main(void) {
	int x1, y1, r1, x2, y2, r2;
	int tcase;
	cin >> tcase;

	for (int i = 0; i < tcase; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		double distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
		if (distance < r1 + r2) {
			if (distance < min(r1, r2))
				cout << "0" << endl;
			else
				cout << "2" << endl;
		}
		else if (distance == r1 + r2 || distance == fabs(r1 - r2))
			cout << "1" << endl;
		else if (distance > r1 + r2)
			cout << "0" << endl;
		else if (distance == 0 && fabs(r1 - r2) == 0)
			cout << "-1" << endl;
	}
	return 0;
}*/

// 조건 하나 빠뜨림. -1 출력하는 것.

int main(void) {
	int t;
	int x1, y1, r1, x2, y2, r2;
	int d, cond1, cond2;
	cin >> t;

	for (int test = 0; test < t; test++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		d = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2); // 굳이 cmath 라이브러리를 이용해서 sqrt 함수를 이용하지 않아도 이렇게 쓸 수 있다.
		cond1 = (r1 - r2) * (r1 - r2);  // 루트 씌웠다고 생각하면 r1-r2이다.
		cond2 = (r1 + r2) * (r1 + r2);

		if (d == 0) {
			if (cond1 == 0)
				cout << "-1" << endl;  // 두 원이 겹칠 때
			else
				cout << "0" << endl;
		}
		else if (d == cond1 || d == cond2)
			cout << "1" << endl;
		else if (cond1 < d && d < cond2)
			cout << "2" << endl;
		else
			cout << "0" << endl;
	}
	return 0;
}