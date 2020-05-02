#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    int x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;

    int x3 = x2 + (y1 - y2);
    int x4 = x3 + (x1 - x2);
    int y3 = y2 - (x1 - x2);
    int y4 = y3 + (y1 - y2);

    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;

    return 0;
}
