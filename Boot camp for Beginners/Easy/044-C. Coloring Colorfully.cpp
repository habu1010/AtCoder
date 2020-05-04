#include <bits/stdc++.h>
using namespace std;

int f(const string &S, char start_ch)
{
    char ch = start_ch;
    int count = 0;
    for (auto s : S)
    {
        if (s != ch)
        {
            count++;
        }
        ch = (ch == '0') ? '1' : '0';
    }
    return count;
}

int main_()
{
    string S;
    cin >> S;

    cout << min(f(S, '0'), f(S, '1')) << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
