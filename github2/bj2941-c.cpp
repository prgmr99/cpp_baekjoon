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
			if (idx == string::npos)  // �����ϴ� ���ڿ��� ���� ���.
				break;
			str.replace(idx, arr[i].length(), "a");  // �� �ܾ �ϳ��� �ܾ�� ��ü
		}
	}
	cout << str.length();
	return 0;
}