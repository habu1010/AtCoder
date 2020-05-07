#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

void main_()
{
    ll N;
    vector<ll> as;
    cin >> N;
    copy_n(istream_iterator<ll>(cin), N, back_inserter(as));

    bitset<100007> pushed;
    int button = 1;
    int ans = 0;
    while (button != 2 && !pushed.test(button)) {
        pushed.set(button);
        button = as[button - 1];
        ans++;
    }
    cout << (pushed.test(button) ? -1 : ans) << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
