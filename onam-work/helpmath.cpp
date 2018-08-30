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
	ll n,a=0,i = 0;
	str s;
	vector< ll > x;
	cin >> s;
	n  = s.size();
	while( i < n)
	{
	if( s[i] != '+')
	{
		x.pb(s[i]-'0');
		a++;
	}
	i++;
}
	i = 0;
	sort(x.begin(),x.end());
	cout << x[i];
	i++;
	while( i < a)
	{
		cout << "+" << x[i];
		i++;
	}
}
