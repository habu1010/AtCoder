#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    vector<vector<int>> css(3);
    for (auto&& cs : css) {
        copy_n(istream_iterator<int>(cin), 3, back_inserter(cs));
    }

    bool ok = true;
    for (int i = 0; i < 2; ++i) {
        if (!(css[0][i] - css[0][i + 1] == css[1][i] - css[1][i + 1]
                && css[0][i] - css[0][i + 1] == css[2][i] - css[2][i + 1])) {
            ok = false;
        }
    }
    for (int i = 0; i < 2; ++i) {
        if (!(css[i][0] - css[i + 1][0] == css[i][0] - css[i + 1][0]
                && css[i][0] - css[i + 1][0] == css[i][2] - css[i + 1][2])) {
            ok = false;
        }
    }

    cout << (ok ? "Yes" : "No") << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
