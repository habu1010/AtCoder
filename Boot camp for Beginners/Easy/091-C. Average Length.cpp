#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N;
    vector<pair<int, int>> xys;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int x, y;
        cin >> x >> y;
        xys.emplace_back(x, y);
    }

    auto dist = [](auto&& a, auto&& b) {
        auto x = a.first - b.first;
        auto y = a.second - b.second;
        return sqrt(x * x + y * y);
    };

    double sum = 0;
    for (auto&& t1 : xys) {
        for (auto&& t2 : xys) {
            if (t1 < t2) {
                sum += dist(t1, t2);
            }
        }
    }

    // 2つの特定の町間の経路数:2(N-1)! / 全経路数:N! = 2/N
    auto ans = sum * 2 / N;
    cout << ans << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    cout << fixed << setprecision(15);
    main_();
    return 0;
}
