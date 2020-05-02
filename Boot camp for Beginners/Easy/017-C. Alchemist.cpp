#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    int N;
    vector<double> vs;
    cin >> N;
    copy_n(istream_iterator<double>(cin), N, back_inserter(vs));

    sort(vs.begin(), vs.end());

    auto value = accumulate(
        vs.begin(), vs.end(), vs.front(),
        [](auto acc, auto n) { return (acc + n) / 2; });

    cout << value << endl;
    return 0;
}
