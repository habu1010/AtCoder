#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

bitset<1'000'000'007> num_exists;

void main_()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int A;
        cin >> A;
        num_exists.flip(A);
    }

    cout << num_exists.count() << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
