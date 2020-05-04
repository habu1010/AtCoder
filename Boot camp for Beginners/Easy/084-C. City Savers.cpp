#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N;
    cin >> N;
    vector<int64_t> As, Bs;
    copy_n(istream_iterator<int64_t>(cin), N + 1, back_inserter(As));
    copy_n(istream_iterator<int64_t>(cin), N, back_inserter(Bs));

    int64_t ans = 0;
    for (int i = 0; i < N; ++i) {
        auto b = Bs[i];
        auto a0 = As[i];
        auto& a1 = As[i + 1];

        ans += min(b, a0 + a1);
        a1 -= max((b - a0), 0L);
        a1 = max(0L, a1);
    }
    cout << ans << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
