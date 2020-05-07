#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N;
    cin >> N;

    map<ll, ll> m; // 棒の長さ、本数
    for (ll i = 0; i < N; ++i) {
        int A;
        cin >> A;
        m[A]++;
    }

    vector<pair<ll, ll>> v; // 棒の長さ、本数
    copy_if(begin(m), end(m), back_inserter(v), [](auto&& m) { return m.second >= 2; });

    ll ans;
    if (v.empty()) {
        ans = 0;
    } else if (v.size() == 1) {
        ans = (v[0].second < 4) ? 0 : v[0].first * v[0].first;
    } else {
        auto v1 = v.back();
        auto v2 = v[v.size() - 2];
        if (v1.second >= 4) {
            ans = v1.first * v1.first;
        } else {
            ans = v1.first * v2.first;
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
