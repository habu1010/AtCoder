#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N;
    vector<ll> as;
    cin >> N;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(as));

    vector<ll> asc(100000);
    for (auto a : as) {
        asc[a]++;
    }

    ll ans = 0;
    for (int i = 0; i < asc.size() - 2; ++i) {
        auto three = asc[i] + asc[i + 1] + asc[i + 2];
        ans = max(ans, three);
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
