#include <bits/stdc++.h>
using namespace std;

int main_()
{
    vector<int> mins;
    copy_n(istream_iterator<int>(cin), 5, back_inserter(mins));
    sort(mins.begin(), mins.end(), [](int a, int b) {
        return ((b % 10) == 0 ? 10 : (b % 10)) > ((a % 10) == 0 ? 10 : (a % 10));
    });
    int ans = accumulate(
        mins.begin() + 1, mins.end(), mins.front(),
        [](int acc, int n) {
            return acc + n + (((n % 10) > 0) ? (10 - n % 10) : 0);
        });

    cout << ans << endl;
}
int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
