#include <iostream>

using namespace std;

int main()
{
    int t, a;

    cin >> t;
    while (t--)
    {
        cin >> a;
        if (a == 1)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";
    return 0;
}