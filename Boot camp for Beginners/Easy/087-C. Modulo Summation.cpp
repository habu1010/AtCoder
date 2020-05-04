#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N;
    cin >> N;
    vector<int> as;
    copy_n(istream_iterator<int>(cin), N, back_inserter(as));

    auto ans = accumulate(begin(as), end(as), 0LL) - N;
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
