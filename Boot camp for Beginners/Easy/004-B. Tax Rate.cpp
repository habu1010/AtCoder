#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, C; cin >> N;
    int X = ceil(N * 100.0 / 108);
    int n = floor(X * 108.0 / 100);
    if (n == N) {
        cout << X << endl;
    } else {
        cout << ":(" << endl;
    }

    return 0;
}
