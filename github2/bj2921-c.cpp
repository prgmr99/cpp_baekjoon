#include <iostream>
using namespace std;

int main(void) {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < N; j++) {
				cout << "* ";
			}
		}
		else {
			for (int j = 0; j < N; j++) {
				cout << " *";
			}
		}
		cout << '\n';
	}
	return 0;
}