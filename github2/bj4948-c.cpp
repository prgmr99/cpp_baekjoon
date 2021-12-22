#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int num;
	int rt, cnt;
	while (1) {
		cin >> num;
		cnt = 0;   // 이거를 그냥 cnt출력 밑에 넣으면 cnt가 그전에는 쓰레기 값이어서 오류 발생.
		if (num == 0)
			break;
		
		for (int i = num + 1; i <= num * 2; i++) {
			rt = sqrt(i);   
			if (rt == 1 && i != 1) {  // rt가 int형이기 때문에, 검사 중인 i가 1,2,3이라면 rt에는 1이 저장될 것.
				cnt++;				  // 1은 소수가 아니기 때문에 1을 제외시키는 조건을 넣는다.
				continue;			  // continue 실행 -> 나머지 반복 부분 실행x 바로 다음 i로 넘어간다.
			}
			if (i % 2) {
				for (int j = 2; j <= rt; j++) {
					if (!(i % j))
						break;
					if (j == rt)
						cnt++;
				}
			}
		}
		cout << cnt << endl;
	}
	return 0;
}