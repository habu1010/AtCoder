#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

ll f(const vector<ll>::const_iterator it_s, const vector<ll>::const_iterator it_e, ll h)
{
    if (it_s == it_e) {
        return 0;
    }
    if (distance(it_s, it_e) == 1) {
        return *it_s - h;
    }

    auto count = *min_element(it_s, it_e) - h;
    auto it_n = find(it_s, it_e, h + count);
    return count + f(it_s, it_n, h + count) + f(it_n + 1, it_e, h + count);
}

void main_()
{
    ll N;
    vector<ll> hs;
    cin >> N;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(hs));

    auto ans = f(begin(hs), end(hs), 0);
    cout << ans << endl;
    return;

    //auto ans = 0;
    auto start_it = begin(hs);
    auto last_it = unique(start_it, end(hs));
    while (distance(start_it, last_it) > 2) {
        // 0ではない中で最小の値
        auto m = *min_element(start_it, last_it,
            [](auto a, auto b) {
                a = (a > 0) ? a : numeric_limits<decltype(a)>::max();
                b = (b > 0) ? b : numeric_limits<decltype(a)>::max();
                return a < b;
            });

        ll cnt = 1 + count(start_it + 1, last_it - 1, 0);

        transform(begin(hs), last_it, begin(hs), [m](auto n) { return max(n - m, 0L); });
        last_it = unique(start_it, last_it);
        ans += cnt * m;
    }

    ans += *max_element(start_it, last_it);
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
