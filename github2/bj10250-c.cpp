#include <iostream>

using namespace std;

int main(void)
{
	int tcase, h, w, n;
	int num1, num2;
	cin >> tcase;
	
	for (int i = 0; i < tcase; i++)
	{
		cin >> h >> w >> n;
		num1 = n / h;
		num2 = n % h;
		/*if (num2 == 0 && num1 < 10)
		{
			cout << h << "0" << num1 << endl;
		}
		else if (num2 == 0 && num1 >= 10)
		{
			cout << h << num1 << endl;
		}
		else if (num2 != 0 && num1+1 < 10)
		{
			cout << num2 << "0" << num1 + 1 << endl;
		}
		else if (num2 != 0 && num1+1 >= 10)
		{
			cout << num2 << num1 + 1 << endl;
		}*/

		if (num2 > 0)
			num1++;
		else
			num2 = h;
		cout << num2 * 100 + num1 << endl;  // 훨씬 깔끔한 코드. 위의 코드를 축약한 코드.
	}
	return 0;
	



	/*int cnt = 0;
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			cnt++;
		}
	}*/ // 2차원을 배열을 선언하지 않는 이상 필요없는 코드.
}

// 굳이 이중 반복문을 사용할 필요가 없다.
// 만약 사용할 거면 2차원 배열을 이용하는 것이 더 나을 지도?
// 왜냐하면 저 cnt가 각각의 방에 할당하는 역할을 하는 것이 아니고
// 그냥 cnt값은 h*w면 구할 수 있기 때문에 할 필요가 없는 코드임.
// 만약 활용할거면 2차원배열을 선언해 각각의 방에 cnt를 할당하는 것이 더 유리해보임.

