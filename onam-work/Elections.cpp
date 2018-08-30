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
	ll n ,a,in,m ,i=0,k,sum=0,vo=0;
	vector< ll > x;
	cin >> n >> a;
	while( n--)
	{
		cin >> in >> m;
		if(in ==1 )
		{
			vo++;
		}
		else
		{
			x.pb(m);
		}
	}
	sort(x.begin(),x.end());
	i=0;
	while( i < k - vo)
	{
		sum+=x[i];
		i++;
	}
	cout << sum;
}
