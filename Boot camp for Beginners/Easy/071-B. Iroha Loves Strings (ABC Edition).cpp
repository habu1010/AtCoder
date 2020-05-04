#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N, L;
    vector<string> Ss;
    cin >> N >> L;
    copy_n(istream_iterator<string>(cin), N, back_inserter(Ss));
    sort(begin(Ss), end(Ss));
    for (auto&& s : Ss) {
        cout << s;
    }
    cout << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
