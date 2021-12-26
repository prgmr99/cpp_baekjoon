#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(void) {
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
		else
			cout << "0" << endl;
	}
	return 0;
}