#include <bits/stdc++.h>
using namespace std;

void main_()
{
    int A, B;
    cin >> A >> B;
    int found_price = -1;

    for (int price = 1;; ++price) {
        int tax_8per = price * 8 / 100;
        int tax_10per = price * 10 / 100;
        if (A == tax_8per && B == tax_10per) {
            found_price = price;
            break;
        }
        if (tax_8per > A || tax_10per > B) {
            break;
        }
    }

    cout << found_price << endl;
}
int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    main_();
    return 0;
}
