#include <iostream>

using namespace std;

int main()
{
    int t, b, a, i = 0;

    cin >> t >> b;
    while (t--)
    {
        cin >> a;
        if (a > b)
            i += 2;
        else 
            i++;
    }
    cout << i;
    return (0);
}