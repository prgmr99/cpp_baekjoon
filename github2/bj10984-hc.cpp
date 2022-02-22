#include <iostream>
using namespace std;

/*int main(void) {
	int T, N, C = 0;
	cin >> T;
	
	double G = 0.0;
	while (T--) {
		cin >> N;
		int sumC = 0;
		double sumG = 0.0;
		for (int i = 0; i < N; i++) {
			cin >> C >> G;
			sumC += C; sumG += G;
		}
		cout << sumC <<' '<< sumG/ (double)N << '\n';
	}
	return 0;
}*/

int main(void) {
	int T;
	cin >> T;

	cout << fixed;
	cout.precision(1);
	for (int i = 0; i < T; i++) {
		int N, score = 0, total = 0;
		double gpa = 0.0, sgpa = 0.0;
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> score >> gpa;
			total += score;
			sgpa += (score*gpa);
		}
		cout << total << ' ' << sgpa / total << '\n';
	}
	return 0;
}