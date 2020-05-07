#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    string S;
    cin >> S;

    ll a = count(begin(S), end(S), 'a');
    ll b = count(begin(S), end(S), 'b');
    ll c = S.size() - a - b;
    auto mmp = minmax({ a, b, c });
    cout << (mmp.second - mmp.first <= 1 ? "YES" : "NO") << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
