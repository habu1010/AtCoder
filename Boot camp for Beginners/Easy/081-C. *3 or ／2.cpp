#include <bits/stdc++.h>
using namespace std;

void main_()
{
    auto num_of_devide_by_2 = [](int n) {
        int count = 0;
        while (n % 2 == 0) {
            count++;
            n /= 2;
        }
        return count;
    };

    int N;
    cin >> N;
    vector<int64_t> as;
    copy_n(istream_iterator<int64_t>(cin), N, back_inserter(as));
    vector<int64_t> dividable_counts;
    transform(
        begin(as), end(as), back_inserter(dividable_counts),
        num_of_devide_by_2);

    int ans = accumulate(begin(dividable_counts), end(dividable_counts), 0);

    cout << ans << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
