#include <bits/stdc++.h>
using namespace std;

void main_()
{
    string O, E;
    cin >> O >> E;
    for (size_t i = 0; i < E.size(); i++) {
        cout << O[i] << E[i];
    }
    if (O.size() != E.size()) {
        cout << O.back();
    }
    cout << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
