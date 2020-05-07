#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    string S;
    cin >> S;
    auto remove_size = S.size() - 7;

    for (auto i = 0; i < S.size() - remove_size + 1; ++i) {
        auto s = S.substr(0, i) + S.substr(i + remove_size);
        if (s == "keyence") {
            cout << "YES\n";
            return;
        }
    }

    cout << "NO\n";
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
