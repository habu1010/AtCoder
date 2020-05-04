#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
    if (s[0] != 'A') {
        return false;
    }

    if (count(begin(s) + 2, end(s) - 1, 'C') != 1) {
        return false;
    }

    s.erase(find(begin(s) + 2, end(s) - 1, 'C'));

    return all_of(begin(s) + 1, end(s),
        [](char ch) { return ::islower(ch); });
}

void main_()
{
    string S;
    cin >> S;
    cout << (check(S) ? "AC" : "WA") << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
