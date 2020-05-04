#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int64_t N, M;
    vector<pair<int64_t, int64_t>> drinks; // 価格,在庫

    cin >> N >> M;
    for (int i = 0; i < N; ++i) {
        int64_t a, b;
        cin >> a >> b;
        drinks.emplace_back(a, b);
    }

    sort(begin(drinks), end(drinks));

    int64_t bought_num = 0;
    int64_t cost = 0;
    for (auto&& drink : drinks) {
        auto buy = min(drink.second, M - bought_num);
        cost += buy * drink.first;
        bought_num += buy;
        if (bought_num == M) {
            break;
        }
    }

    cout << cost << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
