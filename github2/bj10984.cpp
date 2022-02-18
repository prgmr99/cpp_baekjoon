#include <iostream>
using namespace std;

int main(void) {
	int T, N, C = 0;
	cin >> T;
	cin >> N;
	float G = 0.0;
	while (T--) {
		int sumC = 0;
		float sumG = 0.0;
		for (int i = 0; i < N; i++) {
			cin >> C >> G;
			sumC += C; sumG += G;
		}
		cout << sumC <<' '<< sumG/4 << '\n';
	}
	return 0;
}