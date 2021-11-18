#include <iostream>

using namespace std;

int main()
{
	int num1, num2, sum = 0, sq, i = 1, min = 0;
	cin >> num1 >> num2;

	while ((sq = i * i) <= num2)
	{
		if (sq >= num1)
		{
			sum += sq;
			if (min == 0) 
				min = sq;  // 처음에는 0이지만 sq의 값을 계속 업데이트 하면서 min의 값이 변한다.
		}
		++i;
	}
	if (sum == 0)
		cout << -1 << endl;
	else {
		cout << sum << endl;
		cout << min << endl;
	}
}

// max, min이 작기 때문에 1씩 올리면서 찾는 것이 쉽다.