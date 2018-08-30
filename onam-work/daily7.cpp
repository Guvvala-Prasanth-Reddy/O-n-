#include<bits/stdc++.h>
#define ll long long
#define stri string
#define pb  push_back

using namespace std ;
int main()
{
	ll n,i,j = 0 ; 
	stri k,p,m;
	vector < stri >op;
	cin >> n;
	map < stri,ll >s;
	i = n;
	while(n--)
	{
		cin >> k;
		if( s.find(k) != s.end())
		{
			stringstream h;
			p = k;
			h << s[p];
			m = h.str();
			k = k+m;	
			op.pb(k);
			s[p]++;
		}
		else
		{
			op.pb("OK");
			s[k]=1;	
		}	
	}
	while( j < i)
	{
		cout  << op[j]<<endl;	
		j++;
	}
}
