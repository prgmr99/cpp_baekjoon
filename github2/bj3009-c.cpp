#include <iostream>

using namespace std;

int main(void) {
	int x1, y1;
	int x2, y2;
	int x3, y3;
	int x4, y4;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;

	if (x1 == x2)
		x4 = x3;
	if (x2 == x3)
		x4 = x1;
	if (x1 == x3)
		x4 = x2;

	if (y1 == y2)
		y4 = y3;
	if (y2 == y3)
		y4 = y1;
	if (y1 == y3)
		y4 = y2;

	cout << x4 <<' '<< y4 << endl;
	return 0;
}