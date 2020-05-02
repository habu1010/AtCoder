#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    vector<int> as;
    cin >> N;
    copy_n(istream_iterator<int>(cin), N, back_inserter(as));

    sort(as.begin(), as.end());
    reverse(as.begin(), as.end());

    int alice = 0, bob = 0;
    bool alice_turn = true;
    for (auto a : as)
    {
        if (alice_turn)
        {
            alice += a;
        }
        else
        {
            bob += a;
        }

        alice_turn = !alice_turn;
    }

    cout << (alice - bob) << endl;
    return 0;
}
