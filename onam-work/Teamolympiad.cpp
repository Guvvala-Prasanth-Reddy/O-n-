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
	ll n ,a, i = 0 ;
	cin >> n;
	vector< ll > x,set;
	map < ll , ll > y;
	while( i < n)
	{
		cin >> a;
		x.pb(a);
		if( y.find(a) == y.end())
		{
			set.pb(a);
		}
		y[a]++;
	    i++;
	}
	
	}
