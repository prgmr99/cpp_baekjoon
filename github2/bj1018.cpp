#include <iostream>

using namespace std;

int main(void) {
	int m, n;
	char cha;
	cin >> m >> n;
	char** c;
	char** v;
	c = new char* [m];
	v = new char* [m];
	for (int i = 0; i < m; i++) {
		c[i] = new char[n];
		v[i] = new char[n];
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> c[m][n];
			v[m][n] = c[m][n];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if()
		}
		cout << '\n';
	}
}