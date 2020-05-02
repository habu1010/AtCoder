#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    int N, x;
    cin >> N >> x;
    vector<int> as;
    copy_n(istream_iterator<int>(cin), N, back_inserter(as));

    sort(as.begin(), as.end());

    int total = 0;
    int count = 0;
    for (auto &&a : as)
    {
        total += a;
        if (total > x)
            break;
        count++;
    }
    if (total < x)
    {
        count--;
    }

    cout << count << endl;
    return 0;
}
