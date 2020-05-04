#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int64_t N, A, B;
    cin >> N >> A >> B;

    int64_t dist = B - A;

    int64_t ans;
    if (dist % 2 == 0) {
        ans = dist / 2;
    } else {
        if (B - 1 < N - A) {
            ans = A + (B - A - 1) / 2;
        } else {
            ans = (N - B + 1) + (B - A - 1) / 2;
        }
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
