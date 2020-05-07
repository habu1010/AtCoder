#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

struct travel_s {
    int t;
    int x;
    int y;
};

void main_()
{
    ll N;
    vector<travel_s> travels;

    cin >> N;
    for (ll n = 0; n < N; ++n) {
        int t, x, y;
        cin >> t >> x >> y;
        travels.push_back({ t, x, y });
    }

    auto manhattan_dist = [](int x1, int y1, int x2, int y2) {
        return abs(x1 - x2) + abs(y1 - y2);
    };

    for (const auto& t : travels) {
        auto md = manhattan_dist(0, 0, t.x, t.y);
        if (md > t.t || ((t.t - md) % 2 == 1)) {
            cout << "No\n";
            return;
        }
    }

    cout << "Yes\n";
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
