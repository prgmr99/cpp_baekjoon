#include <iostream>
using namespace std;

int main(void) {
	int date, car_num, cnt = 0;
	cin >> date;
	for (int i = 0; i < 5; i++) {
		cin >> car_num;
		if (date == car_num)
			cnt++;
	}
	cout << cnt << '\n';
	return 0;
}