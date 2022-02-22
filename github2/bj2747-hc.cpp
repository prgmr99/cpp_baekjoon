#include <iostream>

using namespace std;

int Fibo(int num) {
	/*if (num == 0)
		return 0;
	if (num == 1)
		return 1;
	return Fibo(num - 1) + Fibo(num - 2);*/
	int n1 = 0;
	int n2 = 1;
	int temp;
	if (num == 1) return 1;
	if (num == 0) return 0;
	for (int i = 2; i <= num; i++) {
		temp = n2;
		n2 = n1 + n2;
		n1 = temp;
	}
	return n2;
}
/*int Fibonacci(int n) {
	int arr[3] = { 0,1,1 };
	for (int i = 2; i < n; i++) {
		arr[(i + 1) % 3] = arr[i % 3] + arr[(i - 1) % 3];
	}
	return arr[n % 3];
}


출처: https://blockdmask.tistory.com/116 [개발자 지망생]*/

int main(void) {
	ios_base::sync_with_stdio;
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	cout << Fibo(n) << '\n';
	return 0;
}