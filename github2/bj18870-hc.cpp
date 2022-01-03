#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/*int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num, x, cnt = 0;
	cin >> num;
	vector<int> v(num);
	int temp;
	for (int i = 0; i < num; i++) {
		cin >> x;
		v[i] = x;
	}
	for (int i = 0; i < num; i++) {
		temp = v[i];
		for (int j = 0; j < num; j++) {
			if (temp > v[j])
				cnt++;
		}
		cout << cnt << ' ';
		cnt = 0;
	}
	return 0;
}*/
// �ð��ʰ� �߻�.
// �ߺ��� ������� �ʰ� ó���ؾ���.

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int> v(n);  // ���� ����
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	vector<int> cv(v);  // ���� ���͸� �����Ͽ� �ߺ��� ���� �����ϰ� ������ ������ ����
	sort(cv.begin(), cv.end());  // �������� ����
	cv.erase(unique(cv.begin(), cv.end()), cv.end());
	for (int i = 0; i < n; i++) {
		// i��° ��Ұ��� ��ġ it
		auto it = lower_bound(cv.begin(), cv.end(), v[i]);
		// it���� cv������ ���� �ּҰ��� ���� ���� ��
		cout << it - cv.begin() << ' ';
	}
	return 0;
}

// lower_bound: ���� Ž�� ��� ���, ���� �������δ� �����Ͱ� ���ĵǾ� �־�� �Ѵ�.
// ������ �� Ư�� K������ ���ų� ū ���� ó�� ������ ��ġ�� �������ִ� �˰���.

// auto Ű����� �ʱ�ȭ �ÿ� �ʱ�ȭ ���� ���� �ڵ����� �ڷ����� �Ǵ��ϴ� ����� ���´�.
// �����ϰ� �ʱ�ȭ�� ���� ������ ����� �Ұ����ϴ�.

// unique �Լ�
// vector �迭���� �ߺ����� �ʴ� ���ҵ��� �տ������� ä�������� �Լ�.
// algorithm����� ����.
// �ߺ����� �ʴ� ���ҵ��� �տ������� ä�������� ������ �ϱ� ������ ���� �޺κ��� �״�� vector���Ұ��� �����Ѵ�.
// �ߺ��� �� ��� ����->�پ�� �ڸ��� �ߺ����� �ʴ� ���� �� ä��->���� �ڸ� ����ŭ ������ �迭 ��� �޺κ��� �״�� �����´�.
// unique �Լ��� �ߺ��Ǿ� �и��� �� ������ ���� �κ��� �ּ��� �����Ѵ�. (���� �� ��Ű�� ó�� ������ ���� �ּ�)

// erase �Լ�
// vector �迭���� Ư�� ���Ҹ� �����ϴ� �Լ�.
// v.erase(v.begin()+s, v.begin()+e) ��ɾ �Է��ϸ� [s,e) ���Ұ� �����ȴ�.
// ��, ���������� ��������, ������ ������ ���� �������� �����ȴ�.