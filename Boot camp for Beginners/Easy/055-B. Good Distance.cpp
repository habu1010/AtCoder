#include <bits/stdc++.h>
using namespace std;

bool distance_is_integral(const vector<int>& xs1, const vector<int>& xs2)
{
    vector<int> as;
    transform(
        begin(xs1), end(xs1), begin(xs2),
        back_inserter(as),
        [](int a, int b) { return (a - b) * (a - b); });
    int sum = accumulate(begin(as), end(as), 0);
    int sqrt_sum = static_cast<int>(sqrt(sum));
    return sqrt_sum * sqrt_sum == sum;
}

void main_()
{
    int N, D;
    cin >> N >> D;
    vector<vector<int>> Xss(N);
    for (auto&& xs : Xss) {
        copy_n(istream_iterator<int>(cin), D, back_inserter(xs));
    }

    int count = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i < j && distance_is_integral(Xss[i], Xss[j])) {
                count++;
            }
        }
    }
    cout << count << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
