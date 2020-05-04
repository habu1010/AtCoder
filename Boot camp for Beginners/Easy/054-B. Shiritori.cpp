#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N;
    cin >> N;
    vector<string> Ws;
    copy_n(istream_iterator<string>(cin), N, back_inserter(Ws));
    vector<bool> cs;
    transform(
        begin(Ws), end(Ws) - 1, begin(Ws) + 1, back_inserter(cs),
        [](auto&& s1, auto&& s2) { return s1.back() == s2.front(); });
    sort(begin(Ws), end(Ws));
    if (unique(begin(Ws), end(Ws)) == end(Ws)
        && all_of(begin(cs), end(cs), [](int c) { return c; })) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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
