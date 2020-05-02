#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
using namespace std;

int main()
{
    fastio;
    std::string S;
    cin >> S;

    constexpr char acgt[] = "ACGT";

    int start_pos = 0;
    int end_pos = 0;
    int max_len = 0;

    while ((start_pos = S.find_first_of(acgt, end_pos)) != string::npos)
    {
        end_pos = S.find_first_not_of(acgt, start_pos);
        end_pos = (end_pos != string::npos) ? end_pos : S.size();
        max_len = max(max_len, end_pos - start_pos);
    }

    cout << max_len << endl;

    return 0;
}
