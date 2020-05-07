#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

ll f(ll A, ll B, ll n)
{
    auto hoge1 = ((A % n) == 0) ? A : (A - (A % n)) + n;
    auto hoge2 = (B / n) * n;
    auto a = (hoge2 - hoge1) / n + 1;
    return a;
}

void main_()
{
    ll A, B, C, D;
    cin >> A >> B >> C >> D;

    auto CDlcm = C / __gcd(C, D) * D;

    auto x1 = f(A, B, C);
    auto x2 = f(A, B, D);
    auto x3 = f(A, B, CDlcm);

    ll ans = B - A + 1 - x1 - x2 + x3;
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
