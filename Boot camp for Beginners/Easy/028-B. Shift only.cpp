#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    int N;
    vector<int> As;
    cin >> N;
    copy_n(istream_iterator<int>(cin), N, back_inserter(As));
    bool odd_found = false;

    int count = 0;
    while (!odd_found)
    {
        for (auto &&a : As)
        {
            if ((a % 2) == 1)
            {
                odd_found = true;
                break;
            }
            a /= 2;
        }
        if (!odd_found)
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
