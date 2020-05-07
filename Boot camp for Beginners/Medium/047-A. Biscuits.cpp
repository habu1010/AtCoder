#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

ll dfs(const vector<ll>& As, ll N, ll P, ll index, ll parity)
{
    if (index == N) {
        return parity == P;
    }

    static array<vector<ll>, 2> memo = { vector<ll>(N, -1), vector<ll>(N, -1) };
    auto& memo_a = memo[parity][index];
    if (memo_a != -1) {
        return memo_a;
    }

    auto c1 = dfs(As, N, P, index + 1, (parity + As[index]) % 2);
    auto c2 = dfs(As, N, P, index + 1, parity);

    memo_a = c1 + c2;

    return c1 + c2;
}

void main_()
{
    ll N, P;
    cin >> N >> P;
    vector<ll> As;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(As));

    auto ans = dfs(As, N, P, 0, 0);

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
