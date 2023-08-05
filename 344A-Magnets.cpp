#include <iostream>
 
using namespace std;
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    int t, a, last = 0, i = 0;

    cin >> t;
    while (t--)
    {
        cin >> a;
        if (a != last)
            i++;
        last = a;
    }
    cout << i;
    return 0;
}