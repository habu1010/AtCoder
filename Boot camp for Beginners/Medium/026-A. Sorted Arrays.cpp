#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N;
    vector<ll> As;
    cin >> N;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(As));

    ll ans = 1;
    auto it = begin(As);
    while (it != end(As)) {
        auto start = *it;
        it = adjacent_find(it, end(As), not_equal_to<ll>());
        if (it == end(As)) {
            break;
        }
        it++;
        if (*it > start) {
            it = adjacent_find(it, end(As), greater<ll>());
        } else {
            it = adjacent_find(it, end(As), less<ll>());
        }
        if (it != end(As)) {
            ans++;
            it++;
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
