#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int FindSeries(int n) {
	int i = 666;
	int series = 0;
	string target;
	while (1) {
		target = to_string(i);
		for (int j = 0; j < target.length() - 2; j++) {
			if (target[j] == '6' && target[j + 1] == '6' && target[j + 2] == '6') {
				series++;
				if (series == n)
					return i;
				break; // 밑에 i++를 통해서 i가 계속 증가하기 때문에
			}		   // 결국 4자리수까지 갔을 때는 '6666','66666' 같은 수는 series가 한번 더 증가하기 때문에 break를 걸어줘야 한다.
		}
		i++;
	}
}

int main(void) {
	int num;
	cin >> num;
	cout << FindSeries(num);
	return 0;
}

// 모든 경우 중에서 가장 작은 경우를 찾아야 한다.
// 그 값을 찾고 찾은 값을 새로운 변수에 대입한다.
// 문제는 숫자를 섞는 경우의 수를 어떻게 처리하지?
// 그냥 666이 들어가있는 경우를 찾으면 된다.