#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    string S;
    cin >> S;

    vector<ll> v(S.size() + 1, -1);

    size_t next_pos = 0;

    while (true) {
        auto pos_s = S.find('<', next_pos);
        pos_s = (pos_s != string::npos) ? pos_s : v.size();
        auto pos_e = S.find('>', pos_s);
        pos_e = (pos_e != string::npos) ? pos_e : v.size();
        iota(begin(v) + next_pos, begin(v) + pos_s, pos_s < v.size() ? 1LL : 0LL);
        reverse(begin(v) + next_pos, begin(v) + pos_s);
        iota(begin(v) + pos_s, begin(v) + pos_e, 0LL);
        if (pos_e == v.size()) {
            break;
        }
        next_pos = pos_e + 1;
    }

    for (int i = 0; i < v.size(); ++i) {
        if (v[i] == -1) {
            v[i] = max(v[i - 1], v[i + 1]) + 1;
        }
    }

    auto ans = accumulate(begin(v), end(v), 0LL);
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
