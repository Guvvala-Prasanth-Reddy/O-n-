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
	ll n ,a,k,i=0,j=0,l=0,f=0,f1 =0;
	str s;
	vector < ll > x;
	cin >> s >> k;
	f = s.size();
	while( i < s.size()-1 )
	{
		if(s[i] == s[i+1])
		{
			if(f == s.size())
			{
				f=i;
				x.pb(i);
				cout << endl << i << " ";
			}	
		}
		else
		{
			x.pb(i+1);
			cout << i << endl;
			f = s.size();
			f1 =1;
		}
		i++;
	}
	if( f1 != 1)
	{
		cout << i  << endl;
		x.pb(i+1);
	}
	while( l < k )
	{
		cin >> n >> a;	
	}
}
