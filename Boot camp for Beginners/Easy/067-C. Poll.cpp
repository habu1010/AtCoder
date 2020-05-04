#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N;
    cin >> N;
    map<string, int> poll_counts;
    int max_vote = 1;
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;

        // operator[]の仕様として、poll_counts[s]が存在しない場合は生成され、0で初期化される
        poll_counts[s]++;
        max_vote = max(max_vote, poll_counts[s]);
    }

    for (auto&& p : poll_counts) {
        if (p.second == max_vote) {
            cout << p.first << endl;
        }
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
