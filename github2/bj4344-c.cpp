#include <iostream>

using namespace std;

/*int main(void) {
	int tcase; cin >> tcase;
	int score, snum, cnt = 0;
	int sum = 0;
	double avg;

	for (int i = 0; i < tcase; i++) {
		cin >> snum;
		int* arr = new int[snum];
		for (int j = 0; j < snum; j++) {
			cin >> score;
			arr[j] = score;
			sum += score;
		}
		avg = sum / snum;
		for (int k = 0; k < snum; k++) {
			if (arr[k] >= avg)
				cnt++;
		}
		
		cout << (cnt / snum) * 100 << endl;
		delete[] arr;
	}
	
	return 0;
*/

int main(void)
{
	int tcase; cin >> tcase;
	int arr[1000] = { 0, };
	int score, snum, cnt;
	int sum;
	double avg, result;

	for (int i = 0; i < tcase; i++) {
		avg = 0;//
		sum = 0;// ���� �� ���� �ʼ���. ���ο� �׽�Ʈ ���̽��� �� ������ �ʱ�ȭ����� ��.
		cnt = 0;//
		cin >> snum;

		for (int j = 0; j < snum; j++) {
			cin >> arr[j];
			sum += arr[j];
		}
		avg = (double)sum / snum;

		for (int j = 0; j < snum; j++) {
			if (arr[j] > avg)
				cnt++;
		}
		result = (double)cnt / snum * 100;
		cout << fixed; // �Ҽ����� �������� ǥ���ϰڴ�.
		cout.precision(3);  // 3�ڸ����� ǥ���ϰڴ�.
		cout << result << "%" << endl;
	}
	return 0;
}