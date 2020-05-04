#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N, A, B;
    cin >> N >> A >> B;
    vector<int> sums;
    vector<int> Ns(N);
    iota(begin(Ns), end(Ns), 1);
    copy_if(
        begin(Ns), end(Ns),
        back_inserter(sums),
        [A, B](int n) {
            int n0 = n % 10;
            int n1 = (n / 10) % 10;
            int n2 = (n / 100) % 10;
            int n3 = (n / 1000) % 10;
            int n4 = (n / 10000) % 10;
            int sum = n0 + n1 + n2 + n3 + n4;
            return (A <= sum && sum <= B);
        });

    auto ans = accumulate(
        begin(sums), end(sums), 0);
    cout << ans << "\n";
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
