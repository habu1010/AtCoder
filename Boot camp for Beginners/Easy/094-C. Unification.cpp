#include <bits/stdc++.h>
using namespace std;

void main_()
{
    string S;
    cin >> S;

    int c0 = count(begin(S), end(S), '0');
    int c1 = count(begin(S), end(S), '1');
    cout << S.size() - abs(c1 - c0) << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
