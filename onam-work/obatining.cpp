#include<bits/stdc++.h>
#define ll long long
#define str string
#define pb  push_back

using namespace std ;
int main()
{
	ll n ,a, i = 0 , j=0 ;
	cin >> n;
	map < str , ll > x,y,z,b;
	string s,t;
	cin >> s >>t;
	for(i = 0 ; i < s.size() ; i++)
	{
		z[s[i]] = i;
		if(x.find(s[i]) != x.end())
		{
			x[s[i]] = 1;
		}
		else
		{
			x[s[i]]++;
		}
	}
	for(j = 0 ; j < t.size() ; j++ )
	{
		b[t[j]] = j;
		if(y.find(s[j]) != y.end())
		{
			y[s[j]] = 1;
		}
		else
		{
			y[s[j]]++;
		}
	}
	if(x.size() != y.size())
	{
		cout << "-1";
		return 0 ;
	}
	else
	{
		for(ll l = 97 ; l < 97+26 ; l++ )
		{
			str d = l;
			if(x[d] != y[d])
			{
				cout << "-1";
				return 0;
			}
		}
	}
	for( j = 97 ; j < 97+26 ; j++)
	{
		d = j;
		if(z[d] != b[d])
		{
			cout << z[d] << b[d] ;
		}
				
