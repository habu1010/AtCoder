#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll A, B, C;
    cin >> A >> B >> C;

    auto ab_lcm = A / __gcd(A, B) * B;
    for (ll a = A; a <= ab_lcm; a += A) {
        if (a % B == C) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
