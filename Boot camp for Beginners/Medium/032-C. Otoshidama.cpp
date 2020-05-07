#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N, Y;
    cin >> N >> Y;

    for (ll yen10k = 0; yen10k <= N; yen10k++) {
        for (ll yen5k = 0; yen5k <= N; yen5k++) {
            if (yen10k + yen5k > N) {
                continue;
            }
            auto yen10k_yen5k_total = yen10k * 10000 + yen5k * 5000;
            if (yen10k_yen5k_total > Y) {
                continue;
            }
            auto yen1k = N - (yen10k + yen5k);
            auto total = yen10k_yen5k_total + yen1k * 1000;
            if (total == Y) {
                cout << yen10k << " " << yen5k << " " << yen1k << endl;
                return;
            }
        }
    }

    cout << "-1 -1 -1" << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
