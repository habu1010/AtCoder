#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N, K;
    cin >> N >> K;

    cout << K * static_cast<ll>(pow(K - 1, N - 1)) << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
