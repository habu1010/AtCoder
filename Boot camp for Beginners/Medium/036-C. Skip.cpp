#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N, X;
    vector<ll> xs;
    cin >> N >> X;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(xs));

    auto ans = accumulate(
        begin(xs), end(xs),
        abs(X - xs.front()),
        [X](auto acc, auto n) {
            return __gcd(acc, abs(X - n));
        });

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
