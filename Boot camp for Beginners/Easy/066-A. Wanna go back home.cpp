#include <bits/stdc++.h>
using namespace std;

void main_()
{
    string S;
    cin >> S;
    bool N_exist = S.find('N') != string::npos;
    bool S_exist = S.find('S') != string::npos;
    bool W_exist = S.find('W') != string::npos;
    bool E_exist = S.find('E') != string::npos;
    if (((N_exist && S_exist) || (!N_exist && !S_exist))
        && ((W_exist && E_exist) || (!W_exist && !E_exist))) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
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
