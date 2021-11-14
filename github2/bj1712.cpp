#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


// 나의 풀이(좀 길긴한데 낫베든데..)
// 시간초과가 발생했을 수가 있다. 반복문 사용으로 인해.
/*int main()
{
	int fcost=0;
	int hcost=0;
	int ncost=0;
	cin >> fcost >> hcost >> ncost;

	for (int i = 1;; i++)
	{
		// 손익분기점이 존재하지 않는다 = 계속 손해를 보거나 계속 이득을 보는 것.
		// 단순히 처음뿐만이 아니라 끝까지 한쪽 방향이라는 것을 증명해야함.
		// 수학적으로 보면 y=hcostx+fcost와 y=ncostx의 기울기로 판단할 수 있음.
		if (hcost >= ncost)
		{
			cout << -1 << endl;
			break;
		}

		if (i == 1)
		{
			if ((fcost + (hcost * i)) < ncost * i)
			{
				cout << -1 << endl;
				break;
			}
		}

		if ((fcost + (hcost*i)) == ncost*i)
		{
			cout << i+1 << endl;
			break;
		}
	}

	return 0;
}*/

int main(void)
{
	int a, b, c;
	int n = 1;
	cin >> a >> b >> c;

	if (b >= c) {
		cout << -1;
		return 0;
	}

	cout << a / (c - b) + 1; // a=(c-b)*i 에서 나온 식.
	return 0;
}