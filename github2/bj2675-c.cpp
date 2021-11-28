#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	int R,T;
	string S;
	//int sLen=S.length(); 여기에 위치하면 안된다. S를 아직 입력받지 않았기 때문이다.
	cin >> T;
	for (int k = 0; k < T; k++)
	{
		cin >> R >> S;
		int sLen=S.length();    // 변수 선언 위치 아무리 c++이라도 막무가네로 위치시키면 안된다.
		for (int i = 0; i < sLen; i++)
			for (int j = 0; j < R; j++)
				cout << S[i];
		cout << endl;
	}
	return 0;
}
/*int main(void) {
	//ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int N, R;
	string S;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> R >> S;
		for (int j = 0; j < S.length(); j++)
			for (int k = 0; k < R; k++)
				cout << S[j];
		cout << '\n';
	}
}*/