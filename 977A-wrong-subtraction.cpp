#include <iostream>

using namespace std;

int main()
{
    long a, b;

    cin >> a >> b;
    while (b > 0)
    {
        if (a % 10 == 0)
            a /= 10;
        else
            a--;
        b--;
    }
    cout << a;
}