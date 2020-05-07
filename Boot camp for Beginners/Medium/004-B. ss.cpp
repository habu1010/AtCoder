#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    string S;
    cin >> S;

    for (size_t i = S.size() / 2 - 1; i > 0; --i) {
        if (S.substr(0, i) == S.substr(i, i)) {
            cout << i * 2 << endl;
            return;
        }
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
