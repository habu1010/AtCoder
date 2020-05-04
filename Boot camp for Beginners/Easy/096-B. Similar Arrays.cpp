#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int64_t N;
    vector<int64_t> As;
    cin >> N;
    copy_n(istream_iterator<int64_t>(cin), N, back_inserter(As));

    auto odd_nums = accumulate(
        begin(As), end(As), 1L,
        [](auto acc, auto n) {
            return acc * (((n % 2) == 0) ? 2 : 1);
        });

    cout << static_cast<int64_t>(pow(3, N)) - odd_nums << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
