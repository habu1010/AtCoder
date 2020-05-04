#include <bits/stdc++.h>
using namespace std;

void main_()
{
    string S;
    int64_t K;
    cin >> S >> K;

    auto pos = S.find_first_not_of("1");

    if (pos == string::npos || K <= pos) {
        cout << 1 << endl;
    } else {
        int d = S[pos] - '0';
        cout << d << endl;
    }
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
