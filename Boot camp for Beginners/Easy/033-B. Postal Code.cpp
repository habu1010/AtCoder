#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    int A, B;
    string S;
    cin >> A >> B >> S;

    auto postal_code_str = S.substr(0, A) + S.substr(A + 1, B);

    if (postal_code_str.find_first_not_of("0123456789") == string::npos &&
        S[A] == '-')
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
