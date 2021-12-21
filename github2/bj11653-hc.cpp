#include <iostream>

using namespace std;

int main(void) {
	int num;
	cin >> num;

	for (int i = 2; i <= num; i++) {
		while (num % i == 0) {
			num /= i;
			cout << i << endl;
		}
	}
	return 0;
}