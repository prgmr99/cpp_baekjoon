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
	arr = to_string(n);  // 문자열로 변환. 숫자 타입의 데이터를 안전하게 스트링 타입으로 변경.
	sort(arr.begin(), arr.end(), compare);
	cout << arr;
	return 0;
}