#include <bits/stdc++.h>
using namespace std;

int main_()
{
    int A, B;
    cin >> A >> B;
    int count = 0;
    for (int i = A; i <= B; ++i)
    {
        auto str = to_string(i);
        if (str[0] == str[4] && str[1] == str[3])
        {
            count++;
        }
    }
    cout << count << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
