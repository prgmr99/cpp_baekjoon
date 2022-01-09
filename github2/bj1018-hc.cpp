#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
using namespace std;
string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"
};
string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"
};
// 재색칠해야하는 횟수는 위의 두 가지의 체스판과 다른 색깔의 총합을 구하면 알 수 있다.
// 간과하면 안되는 것. WB, BW를 모두 고려해야한다는 것.
// 주어진 필드가 검은색으로 시작했다면 BW로 생긴 체스판과 비교를 하며 최솟값을 찾으려 한다.
// 그런데 사실 제일 처음 필드를 W로 재색칠하고 시작하는 경우가 더 최솟값일 수 있다.

string board[50];
int WB_cnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != WB[i][j])
                cnt++;
        }
    }
    return cnt;
}
int BW_cnt(int x, int y)
{
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[x + i][y + j] != BW[i][j])
                cnt++;
        }
    }
    return cnt;
}
int main() {
    int size[2];
    int cnt;
    int min_val = 12345;
    pair<int, int> p1;
    cin >> p1.first >> p1.second;
    for (int i = 0; i < p1.first; i++)
        cin >> board[i];
    for (int i = 0; i + 8 <= p1.first; i++)
    {
        for (int j = 0; j + 8 <= p1.second; j++)
        {
            int tmp;
            tmp = min(WB_cnt(i, j), BW_cnt(i, j));
            if (tmp < min_val) {
                min_val = tmp;
            }
        }
    }
    cout << min_val;
    return 0;
}

// brute force 방식으로 해결하면 되는 문제.
// 모든 경우의 수를 모두 계산해본 후, 가장 재색칠이 적었던 경우를 출력해주면 된다.
// 체스판의 형태는 2가지: 검정색으로 시작하는 경우, 흰색으로 시작하는 경우.