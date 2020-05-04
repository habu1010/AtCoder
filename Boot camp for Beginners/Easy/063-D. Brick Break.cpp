#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N;
    vector<int> as;
    cin >> N;
    copy_n(istream_iterator<int>(cin), N, back_inserter(as));

    auto it = cbegin(as);
    decltype(it) next_it;
    int num = 1;
    while ((next_it = find(it, cend(as), num)) != cend(as)) {
        ++num;
        it = next_it + 1;
    }

    cout << ((num == 1) ? -1 : (N - num + 1)) << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
