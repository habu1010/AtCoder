#include <bits/stdc++.h>
using namespace std;

int main_()
{
    string w;
    cin >> w;
    vector<char> alphabets;
    for (char ch = 'a'; ch <= 'z'; ++ch)
    {
        alphabets.push_back(ch);
    }
    vector<int> counts;
    transform(
        alphabets.begin(), alphabets.end(),
        back_inserter(counts),
        [&w](auto ch) { return count(w.begin(), w.end(), ch); });

    if (all_of(counts.begin(), counts.end(), [](int c) { return c % 2 == 0; }))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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
