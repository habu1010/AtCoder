#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int n = 1;
    while (n * 2 <= N)
    {
        n *= 2;
    }

    cout << n << endl;

    return 0;
}
