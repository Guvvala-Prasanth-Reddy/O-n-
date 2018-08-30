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
	str s;
	ll i = 0 ;
	cin >> s;
	vector < char > x;
	while( i <  s.size())
	{
		if( s[i] == 'A' ||(s[i] == 'a' || (s[i] == 'E'|| (s[i] == 'e'|| (s[i] == 'I'||(s[i] == 'i'||(s[i] == 'o' || (s[i] == 'O' || (s[i] == 'U' || (s[i] == 'u' || (s[i] == 'Y' || s[i] == 'y' )))))))))))
		{
		}
		else
		{
			if( s[i] < 91)
			{
				x.pb( s[i] + 32);
			}
			else
			{
				x.pb( s[i]);
			}
		}
		i++;
	}
	i = 0;
	while( i < x.size())
	{
		cout << "." << x[i];
		i++;
	}
} 
