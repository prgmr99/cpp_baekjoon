#include <iostream>
using namespace std;
long long fiboarr[100] = { 0,1, };

long long fibo(int num) {
	if (num == 0 || num == 1)
		return fiboarr[num];
	else if (fiboarr[num] == 0)
		fiboarr[num] = fibo(num - 1) + fibo(num - 2);
	return fiboarr[num];
}

int main(void) {
	int n;
	cin >> n;
	cout << fibo(n) << '\n';
	return 0;
}