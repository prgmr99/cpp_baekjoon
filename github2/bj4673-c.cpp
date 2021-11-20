#include <iostream>
#include <cstdio>
#define N 10001

using namespace std;

bool arr[N];

int selfnum(int n)
{
	int sum = n;
	while (1) {
		if (n == 0)
			break;
		sum += n % 10;
		n = n / 10;
	}
	return sum;
}

int main(void)
{
	for (int i = 1; i < N; i++)
	{
		int idx = selfnum(i);
		if (idx <= N)
			arr[idx] = true;
	}

	for (int i = 1; i < N; i++)
		if (!arr[i])
			printf("%d\n", i);
	return 0;
}