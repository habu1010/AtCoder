#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    int N, M, X;
    vector<int> As;

    cin >> N >> M >> X;
    copy_n(istream_iterator<int>(cin), M, back_inserter(As));

    auto left = count_if(As.begin(), As.end(), [X](int a) { return a < X; });
    auto right = count_if(As.begin(), As.end(), [X](int a) { return a > X; });

    cout << min(left, right) << endl;
    return 0;
}
