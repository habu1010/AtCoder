#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

// vsをソートしたときnが何番目の要素になるかを返す
static int f(
    vector<int>::const_iterator begin,
    vector<int>::const_iterator end,
    int n)
{
    std::vector<int> vs(begin, end);
    sort(vs.begin(), vs.end());

    auto it = find(vs.begin(), vs.end(), n);
    return distance(vs.begin(), it);
}

static int lexicographical_index(
    vector<int>::const_iterator begin,
    vector<int>::const_iterator end,
    int N)
{
    if (N == 1)
    {
        return 0;
    }
    int pattern_num = 1;
    for (int i = 2; i <= N; ++i)
    {
        pattern_num *= i;
    }

    int index = f(begin, end, *begin) * pattern_num / N;

    return index + lexicographical_index(begin + 1, end, N - 1);
}

int main()
{
    fastio;
    int N;
    vector<int> Ps, Qs;
    cin >> N;
    copy_n(istream_iterator<int>(cin), N, back_inserter(Ps));
    copy_n(istream_iterator<int>(cin), N, back_inserter(Qs));

    auto p_index = lexicographical_index(Ps.cbegin(), Ps.cend(), N);
    auto q_index = lexicographical_index(Qs.cbegin(), Qs.cend(), N);

    cout << abs(p_index - q_index) << endl;

    return 0;
}
