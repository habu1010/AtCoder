#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N;
    vector<ll> As;
    cin >> N;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(As));
    vector<ll> ball_counts(2 * 100'000 + 1);
    for (auto a : As) {
        ball_counts[a]++;
    }
    auto mc2 = [](ll m) { return (m < 2) ? 0 : m * (m - 1) / 2; };
    auto total = accumulate(begin(ball_counts), end(ball_counts), 0LL,
        [mc2](auto acc, auto n) {
            return acc + mc2(n);
        });

    for (auto a : As) {
        auto count = ball_counts[a];
        auto ans = (count < 2) ? total : total - (count - 1);
        cout << ans << "\n";
    }
}
int main()
{
    //cin.tie(nullptr);
    //cout.tie(nullptr);
    //ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
