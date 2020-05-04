#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N, T, A;
    vector<int> Hs;
    cin >> N >> T >> A;
    copy_n(istream_iterator<int>(cin), N, back_inserter(Hs));

    int pos = -1;
    auto min_diff = numeric_limits<double>::max();
    for (int i = 0; i < N; ++i) {
        auto t = T - Hs[i] * 0.006;
        auto diff = abs(t - A);
        if (diff < min_diff) {
            min_diff = diff;
            pos = i + 1;
        }
    }

    cout << pos << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
