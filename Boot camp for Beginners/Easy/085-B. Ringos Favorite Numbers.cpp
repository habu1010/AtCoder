#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int D, N;
    cin >> D >> N;

    cout << (N + (N == 100 ? 1 : 0)) * static_cast<int>(pow(100, D)) << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
