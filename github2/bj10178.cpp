#include <iostream>
using namespace std;

int main(void) {
	int T, piece, left;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int c, v;
		cin >> c >> v;
		piece = c / v;
		left = c % v;
		cout << "You get " << piece << " piece(s) and your dad gets " << left << " piece(s)." << '\n';
	}
	return 0;
}