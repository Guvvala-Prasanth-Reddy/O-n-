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
	ll i = 0 , k = 0 ;
	str s;
	vector < str > x;
	cin >> s;
	while( i < s.size()/2)
	{
		if( s[i] != s[s.size()- i - 1])
		{
			k++;
		}
		if( k > 2)
		{
			cout << "NO" << endl;
			return 0;
		}
		i++;
	}
	if(( k == 1 && s.size()%2 == 0)|| ((k == 0 || k == 1) && s.size()%2 ==1))
	{
		cout << "YES" << endl;
		return 0;
	}
	cout << "NO" << endl;
	}
