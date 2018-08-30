#include<bits/stdc++.h>
#define ll long long
#define str string
#define pb  push_back
#define mp  make_pair
#define ff  first
#define ss  second

using namespace std ;
int main()
{
	ll n ,a , i = 0 , mini = 0 , maxi = 0 , j = 0;
	cin >> n;
	vector < ll > x;
	while( i < n  )
	{
		cin >> a ;
		x.pb(a);
		i++;
	}
	i = 0;
	while( i < n)
	{
		if( i == j)
		{
			j++;
		}
		mini = abs(x[j] - x[i]);
		maxi = abs(x[j] - x[i]);
		j = 0;
		while( j < n )
		{
			if( j != i  &&  maxi < abs(x[j] - x[i]))
			{
				maxi = abs(x[j] - x[i]);
			}
			if ( j != i  && mini > abs(x[j] - x[i]))
			{
				mini = abs(x[j] - x[i]);
			}
			j++;
		}
		cout << mini << " "  << maxi << endl;
		i++;
		j = 0;
	}
}
