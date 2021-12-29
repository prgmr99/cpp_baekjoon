#include <iostream>
#include <algorithm>
using namespace std;

int arr_x[100001];
int arr_y[100001];

bool compare(int a, int b) {
	return a < b;
}

int main(void) {
	int tcase, x, y;
	cin >> tcase;

	for (int i = 0; i < tcase; i++) {
		cin >> x >> y;
		arr_x[i] = x; arr_y[i] = y;
	}
	sort(arr_x, arr_x + tcase, compare);
	sort(arr_y, arr_y + tcase, compare);
	return 0;
}