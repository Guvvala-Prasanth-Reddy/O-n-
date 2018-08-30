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
	ll n ,a , b,c,d ,e ;
	cin >> n ;
	e = n;
	vector < ll > l;
	while( n--)
	{
		cin >> a >> b >> c >> d ;
		l.pb(a+b+c+d);
	}
	ll p = l[0] , r =1		;
	
	for( ll i = 1 ;  i < e ; i++ )
	{
			if( p < l[i])
			{
				r++;
	}
}
	cout << r << endl;
}
