#include <iostream>
#include <vector>  
#include <algorithm>  
 
using namespace std;
 
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
 
    long t = 1, a = 0, i = 0, b = 0, cont = 0, largest = 0, d = 0;
    cin >> t;
    while (t--)
    {
        cin >> a;
        vector<long> v;
        while (i < a)
        {
            cin >> b;
            v.push_back(b);
            i++;
        }
        while (!(is_sorted(v.begin(), v.end())))
        {
            for (long j = 0; j < v.size(); j++)
            {
                if (v.at(j) >= largest)
                {
                    largest = v.at(j);
                    d = j;
                }
                if (v.at(j) != 0)
                    v.at(j)--;
            }
            if (d != i - 1)
            {
                cont = v.at(d) + 1;
                break;
            }
            cont ++;    
        }
        cout << cont << endl;
        cont = 0;
        i = 0;
    }    
}