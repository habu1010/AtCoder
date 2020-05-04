#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int64_t N;
    cin >> N;

    int64_t i = 1;
    int64_t j = N;

    int64_t ans_i = i;
    int64_t ans_j = j;

    while (i < j) {
        j *= i;
        ++i;
        j /= i;
        while (i <= j) {
            auto n = i * j;
            if (n <= N) {
                if (n == N) {
                    ans_i = i;
                    ans_j = j;
                }
                ++j;
                break;
            }
            --j;
        }
    }

    cout << ans_i + ans_j - 2 << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
