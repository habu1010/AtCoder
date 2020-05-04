#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int count = 0;
    for (int a = 0; a <= A; ++a)
    {
        for (int b = 0; b <= B; ++b)
        {
            for (int c = 0; c <= C; ++c)
            {
                int total = (a * 500) + (b * 100) + (c * 50);
                if (total == X)
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}
