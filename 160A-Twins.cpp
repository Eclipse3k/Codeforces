#include <iostream>
 
using namespace std;
 
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int t, int a[100], int s = 0, int i;

	cin >> t;
	i = t;
	while (t--)
	{
		cin >> a[t-1];
		s += a[t-1];
	}
	s /= 2;
	while (t--)
	{
		
	}
}