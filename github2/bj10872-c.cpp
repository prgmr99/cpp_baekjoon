#include <iostream>

using namespace std;

int Factorial(int num) {
	if (num == 0)
		return 1;
	else
		return Factorial(num - 1) * num;
}

int main(void) {
	int num;
	cin >> num;

	cout << Factorial(num) << endl;
	return 0;
}