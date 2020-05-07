#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N;
    cin >> N;

    ll x4num = 0;
    ll x2num = 0;
    for (ll i = 0; i < N; ++i) {
        int a;
        cin >> a;
        if (a % 4 == 0) {
            x4num++;
        } else if (a % 2 == 0) {
            x2num++;
        }
    }
    if (x4num * 2 + 1 + 2 * (x2num / 2) < N) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
    }
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
