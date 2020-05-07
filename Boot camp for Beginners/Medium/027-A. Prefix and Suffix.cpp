#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    int N;
    string s, t;
    cin >> N >> s >> t;

    for (int i = 0; i < N; ++i) {
        if (equal(begin(s) + i, end(s), begin(t))) {
            cout << N + i << endl;
            return;
        }
    }
    cout << N * 2 << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
