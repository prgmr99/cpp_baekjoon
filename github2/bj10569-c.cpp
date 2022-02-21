#include <iostream>
using namespace std;

int main(void) {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int V = 0, E = 0;
		cin >> V >> E;
		cout << 2 + E - V << '\n';
	}
	return 0;
}