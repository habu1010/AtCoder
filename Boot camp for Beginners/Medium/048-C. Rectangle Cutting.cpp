#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll W, H, x, y;
    cin >> W >> H >> x >> y;

    cout << setprecision(10) << static_cast<double>(W) * H / 2 << " " << (x * 2 == W && y * 2 == H ? 1 : 0) << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
