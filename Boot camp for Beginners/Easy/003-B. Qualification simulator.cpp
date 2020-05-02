#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    std::string S;
    cin >> S;

    int a = 0, b = 0;
    for (int i = 0; i < N; ++i)
    {
        switch (S[i])
        {
        case 'a':
            if (a + b < A + B)
            {
                a++;
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            break;
        case 'b':
            if (a + b < A + B && b < B)
            {
                b++;
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            break;
        case 'c':
            cout << "No" << endl;
            break;
        default:
            break;
        }
    }

    return 0;
}
