#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N;
    cin >> N;
    vector<tuple<string, int, int>> restaurants; //!< レストラン名、得点、番号
    for (int i = 0; i < N; i++) {
        int p;
        string s;
        cin >> s >> p;
        restaurants.emplace_back(move(s), p, i + 1);
    }
    sort(begin(restaurants), end(restaurants),
        [](auto&& r1, auto&& r2) {
            auto name1 = get<0>(r1);
            auto name2 = get<0>(r2);
            if (name1 != name2) {
                // 辞書順
                return name1 < name2;
            } else {
                // 高得点順
                auto score1 = get<1>(r1);
                auto score2 = get<1>(r2);
                return score1 > score2;
            }
        });
    for (auto&& r : restaurants) {
        cout << get<2>(r) << endl;
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
