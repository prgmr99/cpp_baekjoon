#include <iostream>

using namespace std;

int main(void) {
	int tcase; cin >> tcase;
	int score, snum, cnt = 0;
	int sum = 0;
	double avg;

	for (int i = 0; i < tcase; i++) {
		cin >> snum;
		int* arr = new int[snum];
		for (int j = 0; j < snum; j++) {
			cin >> score;
			arr[j] = score;
			sum += score;
		}
		avg = sum / snum;
		for (int k = 0; k < snum; k++) {
			if (arr[k] >= avg)
				cnt++;
		}
		
		cout << (cnt / snum) * 100 << endl;
		delete[] arr;
	}
	
	return 0;
}