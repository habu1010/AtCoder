#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;

    int N, M;
    cin >> N >> M;
    std::vector<int> Ls, Rs;
    for (int i = 0; i < M; ++i)
    {
        int l, r;
        cin >> l >> r;
        Ls.push_back(l);
        Rs.push_back(r);
    }

    auto l_max = *max_element(Ls.begin(), Ls.end());
    auto r_min = *min_element(Rs.begin(), Rs.end());
    int count = max(r_min - l_max + 1, 0);

    cout << count << endl;
    return 0;
}
