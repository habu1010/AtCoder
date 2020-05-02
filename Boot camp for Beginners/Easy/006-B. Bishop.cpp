#include <bits/stdc++.h>
using namespace std;

int main()
{
    uint64_t H, W;
    cin >> H >> W;

    uint64_t movable_place_count;

    if (H == 1 || W == 1)
    {
        movable_place_count = 1;
    }
    else
    {
        movable_place_count = (W / 2) * H;

        if ((W % 2) != 0)
        {
            movable_place_count += H / 2;
            if ((H % 2) != 0)
            {
                movable_place_count++;
            }
        }
    }

    cout << movable_place_count << endl;
    return 0;
}
