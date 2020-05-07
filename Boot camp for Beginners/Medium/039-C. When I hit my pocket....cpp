#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll K, A, B;
    cin >> K >> A >> B;

    ll ans = 1;
    if (A >= B - 2) {
        // B-A <= 2の場合、変換しても増えないのでK回ビスケットを増やすのが最大
        ans += K;
    } else {
        for (ll count = 0; count < K;) {
            if (count == K - 1) {
                // 残り1回なら1個増やす
                ans++;
                count++;
            } else if (ans < A) {
                // ビスケットがA枚以下ならA枚まで増やす
                auto inc = min(A - ans, K - count);
                ans += inc;
                count += inc;
            } else {
                // A枚以上あるならA枚→1円→B枚をできるだけ行う
                auto conv_num = (K - count) / 2;
                ans += (B - A) * conv_num;
                count += conv_num * 2;
            }
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
