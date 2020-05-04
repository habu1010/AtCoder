#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N, M;
    vector<int> Ts;
    vector<pair<int, int>> Drinks;
    cin >> N;
    copy_n(istream_iterator<int>(cin), N, back_inserter(Ts));
    cin >> M;
    for (size_t i = 0; i < M; i++) {
        int p, x;
        cin >> p >> x;
        Drinks.emplace_back(p, x);
    }

    int normal_total = accumulate(begin(Ts), end(Ts), 0);

    for (auto&& d : Drinks) {
        int problem_i = d.first - 1;
        int problem_time = d.second;
        int diff = problem_time - Ts[problem_i];
        cout << normal_total + diff << endl;
    }
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
