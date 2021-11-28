#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str;
	cin >> str;

	int idx;

	string arr[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };

	for (int i = 0; i < 8; ++i) {
		while (true) {
			idx = str.find(arr[i]);
			if (idx == string::npos)  // 만족하는 문자열이 없을 경우.
				break;
			str.replace(idx, arr[i].length(), "a");  // 두 단어를 하나의 단어로 교체
		}
	}
	cout << str.length();
	return 0;
}