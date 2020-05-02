#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, C;
    cin >> N >> M >> C;

    vector<int> B;
    copy_n(istream_iterator<int>(cin), M, back_inserter(B));

    vector<vector<int>> A(N);
    for (auto &&a : A)
    {
        copy_n(istream_iterator<int>(cin), M, back_inserter(a));
    }

    vector<int> score;
    for (auto &&a : A)
    {
        int sum = C;
        for (int m = 0; m < M; ++m)
        {
            sum += a[m] * B[m];
        }
        score.push_back(sum);
    }

    cout << count_if(score.begin(), score.end(), [](int score) { return score > 0; }) << endl;
    return 0;
}
