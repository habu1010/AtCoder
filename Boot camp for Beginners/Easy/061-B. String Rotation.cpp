#include <bits/stdc++.h>
using namespace std;

void main_()
{
    string S, T;
    cin >> S >> T;

    auto ans = "No";

    for (size_t i = 0; i < T.size(); i++) {
        if (T == S) {
            ans = "Yes";
            break;
        }
        rotate(begin(S), begin(S) + 1, end(S));
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
