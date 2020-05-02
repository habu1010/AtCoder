#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, K;
    cin >> N;
    cin >> K;
    vector<int> xs;
    copy_n(istream_iterator<int>(cin), N, back_inserter(xs));

    vector<int> As;
    transform(
        xs.begin(), xs.end(), back_inserter(As),
        [](auto x) { return x * 2; });
    vector<int> Bs;
    transform(
        xs.begin(), xs.end(), back_inserter(Bs),
        [K](auto x) { return abs(K - x) * 2; });

    vector<int> short_distances;
    transform(
        As.begin(), As.end(), Bs.begin(),
        back_inserter(short_distances),
        [](auto a, auto b) {
            return (a < b) ? a : b;
        });

    auto sum_distance = accumulate(short_distances.begin(), short_distances.end(), 0);
    cout << sum_distance << endl;
    return 0;
}
