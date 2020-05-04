#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N;
    cin >> N;
    vector<int> Hs;
    copy_n(istream_iterator<int>(cin), N, back_inserter(Hs));

    auto ans = "Yes";

    for (auto it0 = rbegin(Hs), it1 = rbegin(Hs) + 1; it1 != rend(Hs); ++it0, ++it1) {
        if (*it1 - *it0 > 1) {
            ans = "No";
            break;
        }
        if (*it1 - *it0 == 1) {
            (*it1)--;
        }
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
