#include <bits/stdc++.h>
using namespace std;

bool f(int n, const string& s, int index, const string& signs)
{
    if (index == 4) {
        if (n == 7) {
            for (int i = 0; i < index - 1; ++i) {
                cout << s[i] << signs[i];
            }
            cout << s[index - 1] << "=" << n << endl;
            return true;
        }
        return false;
    }
    int d = s[index] - '0';

    return f(n + d, s, index + 1, signs + "+")
        || f(n - d, s, index + 1, signs + "-");
}

void main_()
{
    string S;
    cin >> S;
    f(S[0] - '0', S, 1, "");
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
