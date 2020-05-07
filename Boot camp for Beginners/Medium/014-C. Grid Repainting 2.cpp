#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll H, W;
    cin >> H >> W;
    vector<string> sss;

    copy_n(istream_iterator<string>(cin), H, back_inserter(sss));

    vector<pair<int, int>> dirs = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };

    for (auto w = 0; w < W; ++w) {
        for (auto h = 0; h < H; ++h) {
            if (sss[h][w] != '#')
                continue;
            bool ok = false;
            for (auto&& d : dirs) {
                auto x = w + d.first;
                auto y = h + d.second;
                if (0 <= x && x < W && 0 <= y && y < H) {
                    if (sss[y][x] == '#') {
                        ok = true;
                        break;
                    }
                }
            }
            if (!ok) {
                cout << "No\n";
                return;
            }
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
