#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll L, R;
    cin >> L >> R;

    ll ans = numeric_limits<ll>::max();
    if (R - L > 2018) {
        ans = 0;
    } else {
        for (ll i = L; i <= R - 1; ++i) {
            for (ll j = i + 1; j <= R; ++j) {
                ans = min(ans, i * j % 2019);
            }
        }
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
