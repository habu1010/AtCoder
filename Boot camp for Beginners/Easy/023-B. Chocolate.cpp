#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    int N, D, X;
    cin >> N >> D >> X;
    vector<int> As;
    copy_n(istream_iterator<int>(cin), N, back_inserter(As));
    vector<int> A_eats;
    transform(As.begin(), As.end(), back_inserter(A_eats),
              [D](int A) {
                  return (D - 1) / A + 1;
              });

    auto choco_num = X + accumulate(A_eats.begin(), A_eats.end(), 0);

    cout << choco_num << endl;

    return 0;
}
