#include <bits/stdc++.h>
using namespace std;

int main_()
{
    int N;
    vector<int> Ps;
    cin >> N;
    copy_n(istream_iterator<int>(cin), N, back_inserter(Ps));
    int min_num = numeric_limits<int>::max();
    int count = 0;
    for (auto p : Ps)
    {
        if (min_num > p)
        {
            count++;
            min_num = p;
        }
    }

    cout << count << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
