#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    string S;
    cin >> S;
    sort(S.begin(), S.end());
    vector<bool> a;
    transform(S.begin(), S.end() - 1,
              S.begin() + 1, back_inserter(a),
              [](auto a, auto b) { return a == b; });

    cout << (any_of(a.begin(), a.end(), [](int a) { return a; }) ? "no" : "yes") << endl;

    return 0;
}
