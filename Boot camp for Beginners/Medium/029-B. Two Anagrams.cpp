#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    string s, t;
    cin >> s >> t;
    sort(begin(s), end(s));
    sort(begin(t), end(t), greater<char>());
    cout << (s < t ? "Yes" : "No") << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
