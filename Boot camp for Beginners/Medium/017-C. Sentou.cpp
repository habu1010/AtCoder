#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N, T;
    vector<ll> ts;
    cin >> N >> T;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(ts));

    // tsはソート済み
    vector<ll> result;
    adjacent_difference(begin(ts), end(ts),
        back_inserter(result),
        [T](ll b, ll a) { return min(b - a, T); });

    auto ans = accumulate(begin(result), end(result), 0LL) + T;

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
