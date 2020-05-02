#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    int64_t H;
    cin >> H;

    int64_t mon_num = 1;
    int64_t attack_count = 0;

    while (H > 0)
    {
        attack_count += mon_num;
        H /= 2;
        mon_num *= 2;
    }

    cout << attack_count << endl;

    return 0;
}
