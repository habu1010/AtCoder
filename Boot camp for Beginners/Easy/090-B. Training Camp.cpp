#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int64_t N;
    cin >> N;

    int64_t ans = 1;
    for (int i = 1; i <= N; ++i) {
        ans *= i;
        ans %= 1000000007;
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
