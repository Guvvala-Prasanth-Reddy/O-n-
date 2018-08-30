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
	ll n , m , k , i = 0, a,pos=0,f=0,l=0; 
	cin >> n >> m >> k;
	vector < ll > x,z;
	while( i < m)
	{
		cin >> a;
		x.pb(a);
		i++;
	}
	i=0;
	cin >> a;
		while( i < n)
	{
			z.pb(a%2);
			a/=2;
			i++;
	}		
	i = 0;
	while( f < m)
	{
	while( i < n)
	{
		if(z[i] !=  x[f]%2)
		{
			l++;
		}
		x[f]/=2;
		i++;
	}	
	i=0;
	if( l <= k)
	{
		pos++;
	}
	l =0;
	f++;
	}
	cout << pos << endl;
    }
