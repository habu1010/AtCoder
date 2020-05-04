#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    string S;
    cin >> S;
    unordered_set<char> ss(S.begin(), S.end());

    for (char ch = 'a'; ch <= 'z'; ++ch)
    {
        if (ss.find(ch) == ss.end())
        {
            cout << ch << endl;
            break;
        }
        if (ch == 'z')
        {
            cout << "None" << endl;
        }
    }

    return 0;
}
