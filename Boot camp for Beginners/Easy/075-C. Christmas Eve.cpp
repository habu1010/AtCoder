#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N, K;
    vector<int> hs;
    cin >> N >> K;
    copy_n(istream_iterator<int>(cin), N, back_inserter(hs));
    sort(begin(hs), end(hs));
    vector<int> h_diffs;
    transform(
        begin(hs), end(hs) - K + 1,
        begin(hs) + K - 1,
        back_inserter(h_diffs),
        [](int a, int b) { return b - a; });

    cout << *min_element(begin(h_diffs), end(h_diffs)) << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
