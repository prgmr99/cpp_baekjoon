#include <iostream>

using namespace std;

int main(void) {
	int in, out, max = 0, total, temp=0;
	for (int i = 0; i < 4; i++) {
		cin >> out >> in;
		total = - out + in;
		if (temp >= max)
			max = temp;
		temp += total;
	}
	cout << max << '\n';
	return 0;
}