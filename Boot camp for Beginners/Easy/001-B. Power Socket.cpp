#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int plug_count = 1;
    int tap_count = 0;
    while (plug_count < b)
    {
        plug_count += (a - 1);
        tap_count++;
    }

    cout << tap_count << endl;
    return 0;
}
