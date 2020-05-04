#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int A, B, K;
    cin >> A >> B >> K;

    if (B - A + 1 > K * 2) {
        for (int i = A; i < A + K; ++i) {
            cout << i << "\n";
        }
        for (int i = B - K + 1; i <= B; ++i) {
            cout << i << "\n";
        }
    } else {
        for (int i = A; i <= B; ++i) {
            cout << i << "\n";
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
