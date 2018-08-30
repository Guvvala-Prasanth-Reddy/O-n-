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
	ll i =0,p = 0;
	str s;
	cin >> s ;
	while( i < s.size()-1)
	{
		if( s[i] == 'A' && s[i+1] == 'B')
		{
			p = 0;
			while( p < s.size() - 1 )
			{
				if(( s[p] == 'B' && s[p+1] == 'A') &&(p != i && (p != i+1 && p != i-1)))  
				{
					cout << "YES" << endl;
					return 0 ;
				}
				p++;
			}
		}
		if( s[i] == 'B' && s[i+1] == 'A')
		{
				p = 0;
				while( p < s.size() - 1)
				{
					if(( s[p] == 'A' && s[p+1] == 'B'  )&&(p != i && (p != i+1 && p != i-1)))
					{
						cout << "YES" << endl;
						return 0;
					}
					p++;
					}
		}
		i++;
	}
		cout << "NO" << endl;
	}			
					  
