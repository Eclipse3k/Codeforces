#include <iostream>

using namespace std;

int main()
{
    int a, t;
    bool  b = true;
    
    cin >> a;
    t = a;
    while (a > 0)
    {
        if (a % 10 != 4 && a % 10 != 7)
        {
            b = false;
            break;
        }
        a /= 10;
    }
    if (b == true)
        cout << "YES";
    else if ((b == false) && t % 4 == 0 || t % 7 == 0 || t % 47 == 0)
    {
        cout << "YES";
    }
    else 
        cout << "NO";
    return 0;
}
