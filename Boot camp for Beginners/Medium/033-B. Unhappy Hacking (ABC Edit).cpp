#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    string S;
    cin >> S;

    string ans;
    for (auto ch : S) {
        if (ch == '0' || ch == '1') {
            ans.append(1, ch);
        }
        if (ch == 'B' && !ans.empty()) {
            ans.pop_back();
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
