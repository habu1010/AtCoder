#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N;
    cin >> N;
    vector<int> as;
    copy_n(istream_iterator<int>(cin), 3 * N, back_inserter(as));

    sort(begin(as), end(as));
    auto it_fwd = cbegin(as);
    auto it_rev = crbegin(as);
    int64_t total = 0;
    for (int i = 0; i < N; ++i) {
        it_fwd++;
        it_rev++;
        total += *it_rev;
        it_rev++;
    }
    cout << total << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
