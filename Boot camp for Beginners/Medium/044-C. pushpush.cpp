#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll n;
    vector<ll> as;
    cin >> n;

    deque<ll> bs;
    for (ll i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if (i % 2 == 0) {
            bs.push_back(a);
        } else {
            bs.push_front(a);
        }
    }

    if (n % 2 == 1) {
        reverse(begin(bs), end(bs));
    }

    copy(begin(bs), end(bs), ostream_iterator<ll>(cout, " "));
    cout << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
