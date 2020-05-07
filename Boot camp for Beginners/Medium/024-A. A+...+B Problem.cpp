#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N, A, B;
    cin >> N >> A >> B;

    ll ans = 0;
    if (A > B) {
        ans = 0;
    } else if (N == 1) {
        ans = (A == B) ? 1 : 0;
    } else {
        ans = (B - A) * (N - 2) + 1;
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
