#include <bits/stdc++.h>
using namespace std;

int main_()
{
    int a, b;
    cin >> a >> b;
    if (a <= 0 && 0 <= b)
    {
        cout << "Zero" << endl;
    }
    else if (a > 0)
    {
        cout << "Positive" << endl;
    }
    else if (b < 0)
    {
        if ((b - a) % 2 == 0)
        {
            cout << "Negative" << endl;
        }
        else
        {
            cout << "Positive" << endl;
        }
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
