#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    string ab(a + b);
    auto num = static_cast<double>(atol(ab.c_str()));
    auto sqrt_num = static_cast<int>(sqrt(num));
    if (sqrt_num * sqrt_num == num)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    cout << endl;
    return 0;
}
