#include <bits/stdc++.h>
using namespace std;

int main_()
{
    int N;
    vector<int> As;
    cin >> N;
    copy_n(istream_iterator<int>(cin), N, back_inserter(As));
    auto as_sort(As);
    partial_sort(as_sort.begin(), as_sort.begin() + 2, as_sort.end(),
                 [](int a, int b) { return a > b; });

    vector<int> outs;
    transform(As.begin(), As.end(), back_inserter(outs),
              [&as_sort](int a) { return (a < as_sort[0] ? as_sort[0] : as_sort[1]); });

    for (auto out : outs)
    {
        printf("%d\n", out);
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
