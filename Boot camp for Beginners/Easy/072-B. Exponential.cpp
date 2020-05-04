#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int X;
    cin >> X;

    vector<int> exps;

    exps.push_back(1);
    for (int b = 2; b <= 32; ++b) {
        for (int p = 2;; ++p) {
            int num = pow(b, p);
            if (num > 1000) {
                break;
            }
            exps.push_back(num);
        }
    }
    sort(begin(exps), end(exps));

    auto it = upper_bound(begin(exps), end(exps), X);
    cout << *(it - 1) << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
