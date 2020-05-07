#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N, M;
    cin >> N >> M;

    auto ans = abs(N - 2) * abs(M - 2);
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
