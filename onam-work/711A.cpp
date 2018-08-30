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
	ll n ,flag = 0, i = 0;
	str s;
	vector < str > x; 
	cin >> n;
	while( i < n)
	{
		cin >> s;
		if(s.substr(0,2) == "OO" && flag == 0)
		{
			x.pb("++"+s.substr(2,4));
			flag = 1;	
		}
		else if( s.substr(3,5) == "OO" && flag == 0)
		{
			x.pb(s.substr(0,3)+ "++");
			flag = 1;
		}
		else
		{
			x.pb(s)	;
		}
		i++;
	}
	i = 0;
	if( flag == 1)
	{
		cout <<"YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
		return 0;
	}
	while( i < n)
	{
		cout << x[i] << endl;
		i++;
	}
}
		
	

