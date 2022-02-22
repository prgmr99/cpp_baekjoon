#include <iostream>
using namespace std;

// 0:1 1:3 = A
// 0:2 1:2 = B
// 0:3 1:1 = C
// 0:4 1:0 = D
// 0:0 1:4 = E

int main(void) {
	int fcnt,bcnt;
	for (int i = 0; i < 3; i++) {
		fcnt = bcnt = 0;
		for (int j = 0; j < 4; j++) {
			int n;
			cin >> n;
			if (n == 1)
				bcnt += 1;
			else
				fcnt += 1;
		}
		if (bcnt == 3 && fcnt == 1)
			cout << "A" << '\n';
		else if (bcnt == 2 && fcnt == 2)
			cout << "B" << '\n';
		else if (bcnt == 1 && fcnt == 3)
			cout << "C" << '\n';
		else if (bcnt == 0 && fcnt == 4)
			cout << "D" << '\n';
		else if (bcnt == 4 && fcnt == 0)
			cout << "E" << '\n';
	}
	return 0;
}