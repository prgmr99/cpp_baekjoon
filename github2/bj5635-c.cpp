#include <iostream>

using namespace std;

int main()
{
	int stdNum;
	cin >> stdNum;
	
	int date, month, year;
	char name[15];
	char mname[15];

	for (int i = 0; i < stdNum; i++)
	{
		int y_max = 0;
		cin >> name >> date >> month >> year;
		if (date == 0 || month == 0)
			cout << "잘못 입력했습니다." << endl;
		if (year >= y_max)
		{
			y_max = year;
			*mname = *name;
		}
	}
	cout << mname << endl;
	return 0;
}