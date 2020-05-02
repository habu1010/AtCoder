#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    int64_t N, A, B;
    cin >> N >> A >> B;

    auto blue = (N / (A + B)) * A;
    auto total = (N / (A + B)) * (A + B);

    while (total < N)
    {
        if (total + A >= N)
        {
            blue += N - total;
            break;
        }
        total += (A + B);
        blue += A;
    }

    cout << blue << endl;

    return 0;
}
