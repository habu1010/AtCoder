#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N, M;
    map<string, int> ss, ts;
    cin >> N;
    for (size_t i = 0; i < N; i++) {
        string s;
        cin >> s;
        ss[s]++;
    }
    cin >> M;
    for (size_t i = 0; i < M; i++) {
        string s;
        cin >> s;
        ss[s]--;
    }

    auto max_num = max_element(begin(ss), end(ss),
        [](auto&& a, auto&& b) { return a.second < b.second; })
                       ->second;

    cout << max(max_num, 0) << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
