#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;

    int X;
    cin >> X;

    for (;;++X) {
        int i;
        for (i = 2; i < X; ++i)
        {
            if (X % i == 0)
                break;
        }
        if (i == X)
            break;
    }

    cout << X << endl;

    return 0;
}
