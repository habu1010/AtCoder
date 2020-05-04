#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int H, W;
    cin >> H >> W;
    vector<string> pic;

    copy_n(istream_iterator<string>(cin), H, back_inserter(pic));
    cout << string(W + 2, '#') << "\n";
    for (auto&& p : pic) {
        cout << "#" << p << "#\n";
    }
    cout << string(W + 2, '#') << "\n";
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
