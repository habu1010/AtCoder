#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll X;
    cin >> X;

    auto ans = static_cast<ll>(ceil((-1 + sqrt(1 + 8 * X)) / 2));
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
