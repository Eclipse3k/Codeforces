#include <iostream>
 
using namespace std;
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int t = 1, p;
    long a, lowest = 10000000000;
 
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> a;
        if (a == lowest)
        {
            p = -1;
        }
        if (a < lowest)
        {
            lowest = a;
            p = i;
        }
    }
    if (p == -1)
        cout << "Still Rozdil";
    else 
        cout << p;
}