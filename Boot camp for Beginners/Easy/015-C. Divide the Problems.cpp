#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main()
{
    fastio;

    int N;
    vector<int> d;
    cin >> N;
    copy_n(istream_iterator<int>(cin), N, back_inserter(d));

    sort(d.begin(), d.end());

    cout << d[N / 2] - d[N / 2 - 1] << endl;

    return 0;
}
