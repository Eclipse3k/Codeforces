#include <iostream>

using namespace std;

int main()
{
    int a, b = 0;

    cin >> a;
    while (a > 0)
    {
        b++;
        a -= 5;
    }
    cout << b;
}