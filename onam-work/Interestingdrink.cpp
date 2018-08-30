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
	ll n ,a , i = 0, n1,start = 0,end,mid, f = 0;
	cin >> n;
	vector < ll > x;
	while( i < n)
	{
		cin >> a;
		x.pb(a);
		i++;
	}
	sort(x.begin(),x.end());
	i = 0;
	cin >> n1;
	while( i < n1)
	{
		cin >> a;
		start=0;
		i++;
	}
}	
