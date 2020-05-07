#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    string S;
    cin >> S;

    ll ans = (S.size() - 1) + (S.size() - 1);
    for (size_t i = 1; i < S.size() - 1; ++i) {
        ans += S[i] == 'D' ? i : i * 2;
        ans += S[i] == 'U' ? (S.size() - i - 1) : (S.size() - i - 1) * 2;
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
