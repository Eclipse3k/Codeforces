#include <iostream>

using namespace std;

int main()
{
    int a, b, c, sum = 0;

    cin >> a >> b >> c;
    while (c)
    {
        sum += c * a;
        c--;
    }
    if ((sum - b) < 0)
        cout << '0';
    else
        cout << sum - b;
}