#include <bits/stdc++.h>
using namespace std;

void main_()
{
    string S;
    cin >> S;
    int digit_num = S.size(); // 桁数

    int msd = S[0] - '0';
    int ans1 = (msd - 1) + 9 * (digit_num - 1); // 最上位桁繰り下がり、残り桁9
    int ans2 = accumulate(begin(S), end(S), 0,
        [](int acc, int ch) { return acc + (ch - '0'); });
    cout << max(ans1, ans2) << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
