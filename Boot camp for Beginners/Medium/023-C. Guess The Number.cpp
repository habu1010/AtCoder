#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N, M;
    cin >> N >> M;
    vector<pair<ll, ll>> scs;

    for (ll i = 0; i < M; ++i) {
        int s, c;
        cin >> s >> c;
        scs.emplace_back(s, c);
    }

    vector<int> keta_vals(N, -1);

    for (auto&& sc : scs) {
        int keta = sc.first - 1;
        int val = sc.second;

        if (keta_vals[keta] == -1 || keta_vals[keta] == val) {
            keta_vals[keta] = val;
        } else {
            // 同じ桁に複数の値
            cout << -1 << endl;
            return;
        }
    }

    for (ll i = 0; i < N; ++i) {
        if (i == 0) {
            if (keta_vals[i] == -1) {
                keta_vals[i] = (N > 1) ? 1 : 0;
            } else if (keta_vals[i] == 0 && N > 1) {
                cout << -1 << endl;
                return;
            }
        } else {
            if (keta_vals[i] == -1) {
                keta_vals[i] = 0;
            }
        }
    }

    for (auto&& v : keta_vals) {
        cout << v;
    }
    cout << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
