#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	int R,T;
	string S;
	//int sLen=S.length(); ���⿡ ��ġ�ϸ� �ȵȴ�. S�� ���� �Է¹��� �ʾұ� �����̴�.
	cin >> T;
	for (int k = 0; k < T; k++)
	{
		cin >> R >> S;
		int sLen=S.length();    // ���� ���� ��ġ �ƹ��� c++�̶� �������׷� ��ġ��Ű�� �ȵȴ�.
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