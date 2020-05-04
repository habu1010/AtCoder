#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N;
    cin >> N;
    vector<int> Hs;
    Hs.reserve(N);
    copy_n(istream_iterator<int>(cin), N, back_inserter(Hs));

    vector<int> cs;
    cs.reserve(N);
    transform(
        begin(Hs), end(Hs) - 1,
        begin(Hs) + 1, back_inserter(cs),
        [cont = 0](auto a, auto b) mutable {
            cont = (a >= b) ? cont + 1 : 0;
            return cont;
        });

    cout << (cs.size() > 0 ? *max_element(begin(cs), end(cs)) : 0) << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
