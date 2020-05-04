#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int64_t Q, H, S, D, N;
    cin >> Q >> H >> S >> D >> N;

    auto QHS = min({ Q * 4, H * 2, S });

    int64_t cost;
    if (QHS * 2 <= D) {
        cost = QHS * N;
    } else {
        cost = (N / 2) * D + ((N % 2 != 0) ? QHS : 0);
    }
    cout << cost << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
