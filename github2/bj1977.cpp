#include <iostream>

using namespace std;

class Perfect_Square
{
private:
	int num1, num2;
public:
	Perfect_Square(int n1, int n2): num1(n1),num2(n2) {}

	int IsSquare(int num)
	{
		int fnum = num % 10;
		if (fnum != 0 && fnum != 1 || fnum != 4 || fnum != 5 || fnum != 6 || fnum != 9)
			return -1;
		else
			if (num >= num1 && num <= num2)
				return num;
	}
};

int main()
{
	int num1; cin >> num1;
	int num2; cin >> num2;

	Perfect_Square psq(num1, num2);
	// num이 뭔지 모른다. num은 num1과 num2의 사잇값이 자동으로 나와야 한다.
}