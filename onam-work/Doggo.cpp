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
	ll n ,a , i = 0,j=0,count = 0, p =0;
	cin >> n;
	str s;
	map < char,ll >x;
	vector< char > y;
		cin >> s;
		if(s.size() == 1)
		{
			cout << "Yes" << endl;
			return 0 ;
		}
		while( j < s.size())
		{
			if( x.find(s[j]) == x.end() )
			{
				y.pb(s[j]);
				x[s[j]]++;
				count++;
			}
			else
			{
				x[s[j]]++;
			}
			j++;
		}
	i = 0 ;
	j=0;
	while( i < count)
	{
		if( x[y[i]] > 1)
		{
			p =1;
			break;
			
		}
		i++;	
	}
	if( p == 1)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}
		
