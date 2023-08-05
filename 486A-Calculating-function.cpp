#include <iostream>
 
using namespace std;
 
int main()
{
    long long t, sum = 0;

    cin >> t;
    if (t % 2 == 0)
        sum = t / 2;
    else 
        sum = (((t / 2) + 1) * -1);
    cout << sum;
}