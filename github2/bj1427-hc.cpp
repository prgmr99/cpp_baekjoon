#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool compare(char a, char b) {
	return a > b;
}

int main(void) {
	string arr;
	int n;
	cin >> n;
	arr = to_string(n);  // ���ڿ��� ��ȯ. ���� Ÿ���� �����͸� �����ϰ� ��Ʈ�� Ÿ������ ����.
	sort(arr.begin(), arr.end(), compare);
	cout << arr;
	return 0;
}