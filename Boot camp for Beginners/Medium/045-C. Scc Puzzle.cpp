#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N, M;
    cin >> N >> M;

    ll ans;
    if (N * 2 >= M) {
        ans = M / 2;
    } else {
        ans = N + (M - N * 2) / 4;
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
