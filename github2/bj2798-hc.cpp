#include <iostream>

using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int num, limit, result = 0;
	cin >> num >> limit;
	int arr[101];
	for (int i = 0; i < num; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < num; i++) {
		for (int j = i + 1; j < num; j++) {
			for (int k = j + 1; k < num; k++) {
				if (arr[i] + arr[j] + arr[k] <= limit && arr[i] + arr[j] + arr[k] > result)
					result = arr[i] + arr[j] + arr[k];
			}
		}
	}
	cout << result << '\n';
	return 0;
}