#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    vector<int> X;
    cin >> N;
    istream_iterator<int> in_begin(cin);
    copy_n(in_begin, N, back_inserter(X));
    array<int, 100> vital_sums;

    for (int i = 1; i <= 100; ++i)
    {
        vital_sums[i - 1] = accumulate(
            X.begin(), X.end(), 0, [i](int acc, auto x) {
                return acc + (x - i) * (x - i);
            });
    }

    cout << *min_element(vital_sums.begin(), vital_sums.end()) << endl;
    return 0;
}
