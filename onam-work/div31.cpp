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
	ll n ,a, i =0 ;
	str s;
	map < str , ll >p;
	vector < str > k;
	cin >> n >> a >> s;
	if( s[i] == s[s.size()-1])
	{
		cout << s[0];
		while( a--)
		{
			cout << s.substr(1,s.size()-1);
		}
	}
	else
	{
		while(a--)
		{
			cout << s;
		}
	}
}
