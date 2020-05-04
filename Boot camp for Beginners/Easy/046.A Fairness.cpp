#include <bits/stdc++.h>
using namespace std;

int main_()
{
    int64_t A, B, C, K;
    cin >> A >> B >> C >> K;

    if (K % 2 == 0)
    {
        cout << (A - B) << endl;
    }
    else
    {
        cout << (B - A) << endl;
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
