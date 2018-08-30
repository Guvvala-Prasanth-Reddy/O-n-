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
	ll n,a,l,i=0,sum=0,min = 0 ;
	vector < ll > x,y,z;
	cin >> n;
	while( i < n)
	{
			cin >> a >> l;
			x.pb(a),y.pb(l);
			i++;
	}
	
	i=1;
	min = y[0];
	sum = x[0]*y[0];
	while( i < n)
	{
		if( min > y[i] )
		{
			min = y[i];
		}
		sum += x[i]*min;
		i++;
	}
	cout << sum << endl;
}
