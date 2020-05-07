#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N, M;
    cin >> N >> M;
    vector<ll> Xs;
    Xs.reserve(M);
    copy_n(istream_iterator<ll>(cin), M, back_inserter(Xs));

    if (N >= M) {
        cout << 0 << endl;
        return;
    }

    sort(begin(Xs), end(Xs));
    vector<ll> diffs;
    diffs.reserve(M);
    adjacent_difference(begin(Xs), end(Xs), back_inserter(diffs));

    nth_element(begin(diffs) + 1, begin(diffs) + M - N + 1, end(diffs));
    auto ans = accumulate(begin(diffs) + 1, begin(diffs) + M - N + 1, 0LL);
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
