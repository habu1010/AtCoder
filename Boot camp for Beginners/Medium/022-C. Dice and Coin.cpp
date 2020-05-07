#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

double get_prob(ll K, ll point)
{
    double score = 1;
    while (point < K) {
        point *= 2;
        score /= 2;
    }
    return score;
}

void main_()
{
    ll N, K;
    cin >> N >> K;

    double prob_total = 0.0;
    for (ll i = 1; i <= N; ++i) {
        auto prob = get_prob(K, i);
        prob_total += prob;
    }

    cout << setprecision(15) << prob_total / N << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
