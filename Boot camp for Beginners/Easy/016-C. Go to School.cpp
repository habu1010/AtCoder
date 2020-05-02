#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    int N;
    vector<int> As;

    cin >> N;
    copy_n(istream_iterator<int>(cin), N, back_inserter(As));
    vector<pair<int, int>> ps;

    for (int i = 1; i <= N; ++i)
    {
        ps.emplace_back(i, As[i - 1]);
    }

    sort(ps.begin(), ps.end(), [](auto &&a, auto &&b) {
        return b.second > a.second;
    });

    for (auto &&p : ps)
    {
        cout << p.first << " ";
    }

    cout << endl;

    return 0;
}
