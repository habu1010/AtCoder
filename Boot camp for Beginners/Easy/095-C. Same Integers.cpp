#include <bits/stdc++.h>
using namespace std;

void main_()
{
    array<int, 3> Ns;
    cin >> Ns[0] >> Ns[1] >> Ns[2];
    sort(begin(Ns), end(Ns));

    auto ans = (Ns[2] - Ns[1]) + (Ns[1] - Ns[0] + 1) / 2 + (((Ns[1] - Ns[0]) % 2 == 1) ? 1 : 0);

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
