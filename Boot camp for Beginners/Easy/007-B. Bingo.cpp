#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 9> As;
    copy_n(istream_iterator<int>(cin), 9, As.begin());

    int N;
    cin >> N;

    std::vector<int> bs;
    copy_n(istream_iterator<int>(cin), N, back_inserter(bs));

    const int MARK = 99999;
    for (int b : bs)
    {
        auto it = find(As.begin(), As.end(), b);
        if (it != As.end())
        {
            *it = MARK;
        }
    }

    if ((As[0] == MARK && As[1] == MARK && As[2] == MARK) ||
        (As[3] == MARK && As[4] == MARK && As[5] == MARK) ||
        (As[6] == MARK && As[7] == MARK && As[8] == MARK) ||
        (As[0] == MARK && As[3] == MARK && As[6] == MARK) ||
        (As[1] == MARK && As[4] == MARK && As[7] == MARK) ||
        (As[2] == MARK && As[5] == MARK && As[8] == MARK) ||
        (As[0] == MARK && As[4] == MARK && As[8] == MARK) ||
        (As[2] == MARK && As[4] == MARK && As[6] == MARK))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    cout << endl;
    return 0;
}
