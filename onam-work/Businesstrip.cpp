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
	ll n ,a,k,i=0,sum=0 ;
	vector < ll > x;
	cin >> k ;
	n =12;
	while( n--)
	{
		cin >> a;
		x.pb(a);
	}
	sort(x.begin(),x.end(),greater <ll> ());
	if( k == 0)
	{
		 cout << "0" << endl;
		 return 0;
	}
	while( i < 12)
	{
		sum+=x[i];
		if( sum >= k )
		{
			cout << i+1 << endl;
			return 0;
		}
		i++;
	}
	cout << "-1" << endl;
}
