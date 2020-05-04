#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N;
    vector<ll> as;
    cin >> N;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(as));

    auto ans
        = count_if(
              begin(as), end(as),
              [i = 0, &as](int a) mutable {
                  return as[a - 1] - 1 == i++;
              })
        / 2;

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
