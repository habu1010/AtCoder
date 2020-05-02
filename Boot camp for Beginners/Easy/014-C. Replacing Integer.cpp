#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t N, K;
    cin >> N >> K;

    if (N > K)
    {
        N -= K * (N / K);
    }

    cout << min(N, abs(K - N)) << endl;

    return 0;
}
