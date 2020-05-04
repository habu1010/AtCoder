#include <bits/stdc++.h>
using namespace std;

void main_()
{
    string S;
    cin >> S;

    int count = 0;

    string prev;
    string now;
    for (auto ch : S) {
        now.append(1, ch);
        if (now != prev) {
            count++;
            prev = move(now);
            now = "";
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
