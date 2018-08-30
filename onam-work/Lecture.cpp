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
	ll n ,a , i = 0 ;
	cin >> n >> a;
	str s,d;
	map < str,str > x;
	while( i < a)
	{
		cin >> s >> d;
		x[s] = d;
		i++;
	}
	i = 0;
	while( i < n)
	{
		cin >> s;
		if( s.size() <= x[s].size() )
		{
			cout << s << " ";
		}
		else
		{
			cout << x[s] << " ";
	}
	i++;
}
}
