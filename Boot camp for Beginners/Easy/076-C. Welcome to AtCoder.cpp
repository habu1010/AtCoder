#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N, M;
    cin >> N >> M;

    bitset<100007> ac_problems;
    array<int, 100007> wa_counts = {};

    int ac_total = 0;
    for (int m = 0; m < M; ++m) {
        int p;
        string s;
        cin >> p >> s;
        if (!ac_problems[p]) {
            if (s == "AC") {
                ac_total++;
                ac_problems.set(p);
            }
            if (s == "WA") {
                wa_counts[p]++;
            }
        }
    }

    int wa_total = 0;
    for (int n = 1; n <= N; ++n) {
        if (ac_problems[n]) {
            wa_total += wa_counts[n];
        }
    }

    cout << ac_total << " " << wa_total << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
