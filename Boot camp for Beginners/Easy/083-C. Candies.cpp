#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N;
    array<vector<int>, 2> Ass;
    cin >> N;
    for (auto&& as : Ass) {
        copy_n(istream_iterator<int>(cin), N, back_inserter(as));
    }

    int ans = 0;
    for (int i = 0; i < N; ++i) {
        int candies = accumulate(begin(Ass[0]), end(Ass[0]) - i, 0)
            + accumulate(begin(Ass[1]) + N - i - 1, end(Ass[1]), 0);
        ans = max(ans, candies);
    }

    cout << ans << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
