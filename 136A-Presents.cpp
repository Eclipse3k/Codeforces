#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
int main()
{    
    #ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
    int t, a[100], b[100];
    
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a[i];
        b[a[i] - 1] = i + 1;
    }
    for (int i = 0; i < t; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}