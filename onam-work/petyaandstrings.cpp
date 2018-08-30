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
	str s1,s2;
	ll i = 0;
	cin >> s1 >> s2;
	char c1,c2;
	while( i < s1.size())
	{
		c1 = s1[i],c2 = s2[i];
		if( c1 > 95)
		{
			c1  -=  32;
		}
		if( c2 > 95)
		{
			c2  -= 32;  
		}
		if( c1 == c2)
		{
		i++;
		}
		else if( c1 > c2  )
		{
			cout << 1;
			return 0;
		}
		else if( c1 < c2 )
		{
			cout << -1;
			return 0;
		}
	}
	cout << 0;
}
