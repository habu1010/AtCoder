#include <bits/stdc++.h>
using namespace std;

int main_()
{
    int N, M;
    cin >> N >> M;

    vector<vector<int>> Ass(N);
    for (auto &&as : Ass)
    {
        int K;
        cin >> K;
        copy_n(istream_iterator<int>(cin), K, back_inserter(as));
        sort(as.begin(), as.end());
    }

    auto ans = accumulate(
        Ass.begin() + 1, Ass.end(),
        Ass.front(),
        [](auto &&acc, auto &&as) {
            std::vector<int> result;
            set_intersection(
                acc.begin(), acc.end(),
                as.begin(), as.end(),
                back_inserter(result));
            return result;
        });

    cout << ans.size() << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
