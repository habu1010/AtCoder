#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll K, N;
    vector<ll> ps;
    cin >> N >> K;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(ps));

    auto dice_sum = accumulate(begin(ps), begin(ps) + K, 0LL);
    auto max_dice_sum = dice_sum;
    for (ll i = 0; i < N - K; ++i) {
        dice_sum = dice_sum + ps[i + K] - ps[i];
        max_dice_sum = max(max_dice_sum, dice_sum);
    }

    cout << setprecision(10) << static_cast<double>(max_dice_sum + K) / 2 << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
