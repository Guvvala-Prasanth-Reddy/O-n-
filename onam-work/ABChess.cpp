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
	ll n = 8  , i = 0, j =0 ;
	str a;
	vector < str > x;
	map < char , ll >p;
	while( i < n)
	{
		cin >> a;
		i++;
		x.pb(a);
	}
	i = 0;
	while( i < n)
	{
		while( j < x[i].size())
		{
			if( p.find(x[i][j]) != p.end() )
			{
			p[x[i][j]]++;
			}
			else
			{
				p[x[i][j]] = 1;
			}
			j++;
		}
		j = 0 ;
		i++;
	}
	ll p1,p2;
	p1 = p['Q']*9+p['R']*5+p['B']*3+p['N']*3+p['P']*1;
	p2 = p['q']*9+p['r']*5+p['b']*3+p['n']*3+p['p']*1;
	if(  p1 > p2 )
	{
		cout << "White" << endl;
	}
	else if( p1 < p2)
	{
		cout << "Black" << endl;
	}
	else 
	{
		cout << "Draw" << endl;
	}
}
