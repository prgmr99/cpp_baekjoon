#include <iostream>

using namespace std;

int main(void) {
	int x, y, w, h, min = 1001;
	cin >> x >> y >> w >> h;

	if (h - y < w - x) {
		if ((h - y) > x)
			min = x;
		else
			min = h - y;
	}
	else if (h - y > w - x) {
		if ((w - x) > y)
			min = y;
		else
			min = w - x;
	}
	else if (h - y == w - x) {
		if (h - y < x || h - y < y)
			min = h - y;
		else {
			if (x > y)
				min = y;
			else
				min = x;
		}
	}
	cout << min << endl;
	return 0;
}