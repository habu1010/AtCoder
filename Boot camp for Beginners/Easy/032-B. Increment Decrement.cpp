#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    int N;
    string S;
    cin >> N >> S;

    int x = 0;
    int ans = 0;
    for (int i = 0; i < N; ++i)
    {
        switch (S[i])
        {
        case 'I':
            x++;
            break;
        case 'D':
            x--;
            break;
        default:
            assert(false);
            break;
        }
        ans = max(ans, x);
    }

    cout << ans << endl;
    return 0;
}
