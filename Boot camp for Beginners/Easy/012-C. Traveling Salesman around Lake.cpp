#include <bits/stdc++.h>
using namespace std;

int main()
{
    int K, N;
    vector<int> As;
    cin >> K >> N;
    As.reserve(N);
    copy_n(istream_iterator<int>(cin), N, back_inserter(As));

    vector<int> distances;
    distances.reserve(N);
    std::transform(
        As.begin(), As.end() - 1,
        As.begin() + 1,
        back_inserter(distances),
        [](int a, int b) {
            return b - a;
        });
    distances.push_back(K - As.back() + As.front());

    auto max_distance = *max_element(distances.begin(), distances.end());

    cout << K - max_distance << endl;
    return 0;
}
