#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int X;
    cin >> X;
    vector<pair<int, int>> available_ranges;

    for (int i = 0;; ++i) {
        int from = (i + 1) * 100;
        int to = (i + 1) * 105;
        available_ranges.emplace_back(from, to);
        if (to - from >= 100) {
            available_ranges.emplace_back(to, 100000);
            break;
        }
    }

    auto ans = any_of(
        begin(available_ranges), end(available_ranges),
        [X](auto&& ar) {
            return ar.first <= X && X <= ar.second;
        });

    cout << (ans ? '1' : '0') << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
