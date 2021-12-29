#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num, temp;
	cin >> num;
	vector<int> a;
	for (int i = 0; i < num; i++) {
		cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(), a.end());
	for (int i = 0; i < num; i++)
		cout << a[i] << endl;
	return 0;
}*/

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[1000001];
	int n;

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << '\n';
}