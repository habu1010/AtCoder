#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

set<int> dfs(const vector<ll>& ss, int index, int N)
{
    static array<set<int>, 100> memo;

    if (!memo[index].empty()) {
        return memo[index];
    }

    auto score = ss[index];

    set<int> result;
    if (index == N - 1) {
        result.insert(0);
        result.insert(score);
    } else {
        auto r1 = dfs(ss, index + 1, N);
        for (auto&& r : r1) {
            result.insert(r + score);
            result.insert(r);
        }
    }
    memo[index] = result;
    return result;
}

void solve_by_dfs(const vector<ll>& ss, int N)
{
    auto score_pattern = dfs(ss, 0, N);

    vector<ll> notx10_scores;
    copy_if(begin(score_pattern), end(score_pattern), back_inserter(notx10_scores), [](ll a) { return a % 10 != 0; });

    if (notx10_scores.empty()) {
        cout << "0" << endl;
    } else {
        cout << *max_element(begin(notx10_scores), end(notx10_scores)) << endl;
    }
}

void main_()
{
    ll N;
    vector<ll> ss;
    cin >> N;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(ss));

    solve_by_dfs(ss, N);
    return;

    auto total = accumulate(begin(ss), end(ss), 0LL);

    // 総計が10の倍数でないならそれが最大値
    if (total % 10 != 0) {
        cout << total << endl;
        return;
    }

    // 総計が10の倍数なら、10の倍数ではないスコアのうち最小のものを引いたのが最大値
    auto notx10_end = partition(begin(ss), end(ss), [](ll a) { return a % 10 != 0; });

    if (notx10_end == ss.begin()) {
        // 10の倍数のスコアしか無いので0
        cout << 0 << endl;
        return;
    }

    auto notx10_min = *min_element(begin(ss), notx10_end);
    cout << total - notx10_min << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
