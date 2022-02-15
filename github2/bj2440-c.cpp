#include <iostream>
using namespace std;

int main(void) {
	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		for (int j = num - i; j > 0; j--) {
			cout << '*';
		}
		cout << '\n';
	}
	return 0;
}