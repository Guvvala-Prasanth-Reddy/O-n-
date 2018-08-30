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
	ll n ,m,a,b,h=0 ,count = 0,l, q, flag=0 ;
	str t,s;
	vector < pair <ll,ll> > x;
	vector < ll > y;
	cin >> n >> m >> q;
	cin >> t >> s;
	for(ll i = 0 ; i  < t.size() ; i++)
	{
		for( ll j = 0 ; j < s.size() ; j++)
		{
			if(t[i] != s[j])
			{
				flag = 1;
				break;
			}
		}
		if(flag!=1)
		{
			x.pb(mp(i+1,i+s.size()));
			i=i+s.size()-1;
		}
	}
	l = q;
	while(q--)
	{
		cin >> a >> b;
		while( h < x.size())
		{
			if(x[h].ff <= a || x[h].ss >= b)
			{
				count++;
			}
			else
			{
				y.pb(count);
				break;
			}
			h++;
		}		
	}
	h =0;
	while( h < y.size())
	{
		cout << y[h] << endl;
		h++;		
	}
}
		
