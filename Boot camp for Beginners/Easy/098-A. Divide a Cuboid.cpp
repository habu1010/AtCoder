#include <bits/stdc++.h>
using namespace std;

void main_()
{
    array<int64_t, 3> as;
    cin >> as[0] >> as[1] >> as[2];

    if (any_of(begin(as), end(as),
            [](auto a) { return (a % 2) == 0; })) {
        cout << 0 << endl;
    } else {
        auto ans = min({ as[0] * as[1], as[0] * as[2], as[1] * as[2] });
        cout << ans << endl;
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
