#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int f(int n)
{
    if ((n % 2) == 0)
    {
        return n / 2;
    }
    else
    {
        return 3 * n + 1;
    }
}

int main()
{
    fastio;
    int s;
    cin >> s;

    set<int> nums;

    auto a = s;
    int m = 1;
    while (nums.find(a) == nums.end())
    {
        nums.insert(a);
        a = f(a);
        m++;
    }

    cout << m << endl;
    return 0;
}
