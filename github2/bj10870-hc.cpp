#include <iostream>

using namespace std;

int Fibo(int num1) {
	if (num1 < 2)
		return num1;
	else
		return Fibo(num1 - 1) + Fibo(num1 - 2);  // ���� ������ �����ϸ� ���� �� �� �ִ�.
}

int main(void) {
	int num;
	cin >> num;

	cout << Fibo(num) << endl;
	return 0;
}