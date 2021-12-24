#include <iostream>

using namespace std;

int main(void) {
	int a,b,c;
	int temp = 0;
	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) //&& num[1] == '0' && num[2] == '0') 필요없다. 삼각형에서는 한 변이 0이면 삼각형이 아니기 때문
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
// 출력은 잘된다. 시간초과 발생.
// 수정했는데 비슷한데?