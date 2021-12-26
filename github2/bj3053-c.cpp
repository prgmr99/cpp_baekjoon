#define PI 3.1415926535897932
#include <iostream>


using namespace std;

/*int main(void) {
	double rad;
	cin >> rad;
	double circle;
	double taxi;

	circle = rad * rad * M_PI;
	taxi = 2 * rad * rad;

	cout << circle << endl;
	cout << taxi << endl;
	return 0;
}*/

int main(void) {
	double rad;
	cin >> rad;

	cout << fixed;       // 소수점 고정하기위해서 사용
	cout.precision(6);   // 6자리까지 출력하기 위해 사용
	cout << rad * rad * PI << "\n" << 2 * rad * rad << "\n";
	return 0;
}