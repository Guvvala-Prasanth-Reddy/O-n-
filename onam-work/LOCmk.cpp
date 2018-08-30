#include<bits/stdc++.h>
#define ll long long
#define str string
#define pb  push_back

using namespace std ;
int main()
{
ll tests;
cin >> tests;
while(tests--)
{
	ll n , a , i = 0,j = 0,key,p =0,count = 0;
	vector < ll > x,y; 
	cin >> n >> a;
	while(i < n)
	{
		cin >> key;
		 x.pb(key);
		 i++;
	}
	i = 0;
	while(i < n)
	{
		cin >> key ; 
		y.pb(key);
		i++;
	}
	sort(y.begin(),y.end());
	sort(x.begin(),x.end());
	i=n-1,j=n-1;
	while(j >= 0 && i >= 0)
	{
		if(x[i] > y[j])
		{
			count++;
			i--,j--;
		}
		else
		{
			j--;
			p++;
		}
	}
	if(count  >= a) 
	{
		cout << "YES\n";
	}
	else
	{
	if(count  - p >= 0)
	{
		cout <<"YES\n";
	}
	else
	{
		cout << "NO\n";
	}
}
}
}
		
