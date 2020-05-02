#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    std::string S;
    cin >> S;

    vector<int> nums;
    for (int i = 0; i < S.size() - 2; ++i)
    {
        nums.push_back(stoi(S.substr(i, 3)));
    }

    std::transform(nums.begin(), nums.end(),
                   nums.begin(),
                   [](int n) { return abs(753 - n); });

    cout << *min_element(nums.begin(), nums.end()) << endl;
    return 0;
}
