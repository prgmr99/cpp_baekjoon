#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(void) {
	stack<int> s;
	int N, num;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		s.push(num);
	}
}