#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int64_t X, Y;
    cin >> X >> Y;

    int ans = 0;
    while (X <= Y) {
        X *= 2;
        ans++;
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
