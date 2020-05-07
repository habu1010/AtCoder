#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

int f(string s1, string s2)
{
    sort(begin(s1), end(s1));
    sort(begin(s2), end(s2));
    auto s1end = unique(begin(s1), end(s1));
    auto s2end = unique(begin(s2), end(s2));

    string result;
    set_intersection(
        begin(s1), s1end,
        begin(s2), s2end,
        back_inserter(result));
    return result.size();
}
void main_()
{
    ll N;
    string S;
    cin >> N >> S;

    int ans;
    for (int i = 1; i < N; ++i) {
        ans = max(ans, f(S.substr(0, i), S.substr(i, N)));
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
