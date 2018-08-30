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
	ll n,a,l,i=0,sum=0;
	vector < ll > x,y,z;
	cin >> n;
	while( i < n)
	{
		cin >> a >> l;
		x.pb(a);
		y.pb(l);
		z.pb(l);
		i++;
	}
	sort(z.begin(),z.end());
	i=0;
	while( i < n )
	{
		if( y[i] == z[0])
		{
			while( i < n)
			{
				sum+=x[i]*y[i];
				i++;
			}
		}
		else
		{
			sum+=x[i]*y[i];
		}
		i++;
	}
	cout << sum << endl;		
	}
