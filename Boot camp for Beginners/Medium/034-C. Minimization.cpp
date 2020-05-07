#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N, K;
    cin >> N >> K;

    ll ans = ((N - 1) + (K - 2)) / (K - 1);
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
