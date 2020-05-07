#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N, M;
    vector<ll> Ds, Ts;
    cin >> N;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(Ds));
    cin >> M;
    copy_n(istream_iterator<ll>(cin), M, back_inserter(Ts));

    sort(begin(Ds), end(Ds));
    sort(begin(Ts), end(Ts));

    cout << (includes(begin(Ds), end(Ds), begin(Ts), end(Ts)) ? "YES" : "NO") << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
