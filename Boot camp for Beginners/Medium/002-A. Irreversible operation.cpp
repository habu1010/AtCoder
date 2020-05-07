#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    string S;
    cin >> S;

    ll ans = 0;
    ll w_count = 0;
    for (size_t i = 0; i < S.size(); ++i) {
        if (S[i] == 'W') {
            ans += i - w_count;
            w_count++;
        }
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
