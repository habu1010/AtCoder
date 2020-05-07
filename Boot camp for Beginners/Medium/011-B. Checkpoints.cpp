#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N, M;
    cin >> N >> M;
    vector<pair<ll, ll>> students;
    for (ll i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        students.emplace_back(a, b);
    }
    vector<pair<ll, ll>> checkpoints;
    for (ll i = 0; i < M; ++i) {
        int c, d;
        cin >> c >> d;
        checkpoints.emplace_back(c, d);
    }

    auto dist_manhattan = [](auto&& p1, auto&& p2) {
        return abs(p1.first - p2.first) + abs(p1.second - p2.second);
    };

    for (const auto& s : students) {
        ll min_dist = numeric_limits<ll>::max();
        int goal_num = 0;
        int checkpoint_num = 0;
        for (const auto& c : checkpoints) {
            checkpoint_num++;
            auto dist = dist_manhattan(s, c);
            if (dist < min_dist) {
                goal_num = checkpoint_num;
                min_dist = dist;
            }
        }
        cout << goal_num << "\n";
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
