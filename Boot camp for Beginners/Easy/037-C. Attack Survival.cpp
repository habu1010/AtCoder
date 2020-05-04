#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
using namespace std;

int main()
{
    fastio;
    int N, K, Q;
    vector<int> As;
    cin >> N >> K >> Q;
    copy_n(istream_iterator<int>(cin), Q, back_inserter(As));

    vector<int> scores(N, K);
    for (auto a : As)
    {
        scores[a - 1]++;
    }
    transform(scores.begin(), scores.end(), scores.begin(), [Q](int score) { return score - Q; });

    for (auto score : scores)
    {
        cout << ((score > 0) ? "Yes" : "No") << endl;
    }
    return 0;
}
