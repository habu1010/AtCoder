#include <bits/stdc++.h>
using namespace std;

void main_()
{
    string A, B;
    cin >> A >> B;
    if (A.size() > B.size()) {
        cout << "GREATER\n";
        return;
    }
    if (A.size() < B.size()) {
        cout << "LESS\n";
        return;
    }
    if (A > B) {
        cout << "GREATER\n";
        return;
    }
    if (B > A) {
        cout << "LESS\n";
        return;
    }

    cout << "EQUAL\n";
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
