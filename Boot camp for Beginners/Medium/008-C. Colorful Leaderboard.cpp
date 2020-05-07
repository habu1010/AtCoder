#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N;
    vector<ll> as;
    cin >> N;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(as));

    set<int> colors;
    ll over3200_num = 0;
    for (auto&& a : as) {
        if (a < 3200) {
            colors.insert(a / 400);
        } else {
            over3200_num++;
        }
    }

    cout << max(colors.size(), 1UL) << " " << colors.size() + over3200_num << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
