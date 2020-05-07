#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N, K;
    vector<ll> As;
    cin >> N >> K;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(As));

    vector<ll> balls(N);
    for (auto a : As) {
        balls[a - 1]++;
    }

    nth_element(begin(balls), begin(balls) + K, end(balls), greater<ll>());

    ll keep = accumulate(begin(balls), begin(balls) + K, 0LL);

    ll ans = N - keep;

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
