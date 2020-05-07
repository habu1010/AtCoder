#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    string s;
    cin >> s;

    auto ans = numeric_limits<size_t>::max();
    for (char ch = 'a'; ch <= 'z'; ++ch) {
        string ss = s;
        size_t i;
        for (i = 0; i < s.size() && ss.find_first_not_of(ch) != string::npos; ++i) {
            string next_s;
            adjacent_difference(
                begin(ss), end(ss), back_inserter(next_s),
                [ch](char a, char b) { return a == ch || b == ch ? ch : a; });
            ss = next_s.substr(1);
        }
        ans = min(i, ans);
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
