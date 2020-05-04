#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int H, W;
    cin >> H >> W;
    vector<string> Css;
    copy_n(istream_iterator<string>(cin), H, back_inserter(Css));

    for (auto&& cs : Css) {
        cout << cs << "\n"
             << cs << "\n";
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
