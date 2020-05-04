#include <bits/stdc++.h>
using namespace std;

void main_()
{
    string S;
    cin >> S;
    auto start_pos = S.find('A');
    auto end_pos = S.rfind('Z');
    cout << end_pos - start_pos + 1 << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
