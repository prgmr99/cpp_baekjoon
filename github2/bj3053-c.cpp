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

	cout << fixed;       // �Ҽ��� �����ϱ����ؼ� ���
	cout.precision(6);   // 6�ڸ����� ����ϱ� ���� ���
	cout << rad * rad * PI << "\n" << 2 * rad * rad << "\n";
	return 0;
}