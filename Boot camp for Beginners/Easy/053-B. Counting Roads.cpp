#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int N, M;
    vector<pair<int, int>> roads;
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        roads.emplace_back(a, b);
    }

    for (int i = 1; i <= N; i++) {
        auto road_num = count_if(
            begin(roads), end(roads),
            [i](auto&& road) {
                return road.first == i || road.second == i;
            });
        cout << road_num << "\n";
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
