#include <bits/stdc++.h>
using namespace std;

void main_()
{
    array<uint64_t, 100> ln = {2, 1};

    int N;
    cin >> N;

    transform(begin(ln), begin(ln) + N - 1,
              ln.begin() + 1,
              ln.begin() + 2,
              plus<uint64_t>());

    cout << ln[N] << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
