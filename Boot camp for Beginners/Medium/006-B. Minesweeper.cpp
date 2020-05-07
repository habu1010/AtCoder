#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll H, W;
    vector<string> Ss;
    cin >> H >> W;
    copy_n(istream_iterator<string>(cin), H, back_inserter(Ss));

    vector<pair<int, int>> dirs = {
        { -1, -1 },
        { 0, -1 },
        { 1, -1 },
        { -1, 0 },
        { 1, 0 },
        { -1, 1 },
        { 0, 1 },
        { 1, 1 },
    };

    for (int i = 0; i < W; ++i) {
        for (int j = 0; j < H; ++j) {
            if (Ss[j][i] == '.') {
                int mines = count_if(begin(dirs), end(dirs),
                    [i, j, W, H, &Ss](auto&& p) {
                        int x = i + p.first;
                        int y = j + p.second;
                        return (0 <= x && x < W && 0 <= y && y < H && Ss[y][x] == '#');
                    });
                Ss[j][i] = mines + '0';
            }
        }
    }

    for (auto&& s : Ss) {
        cout << s << endl;
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
