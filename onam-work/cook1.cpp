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
	ll p , j =0;
	cin >> p;
	vector < ll >x;
	while( j < p)
	{
	ll n ,a,i=0,k=0,b ;
	cin >> n >> b;
	if( n < b)
	{
		x.pb(2);
		j++;
		continue;
	}
	while( i < n)
	{
		cin >> a;
		if(i%2 == 0)
		{
			k+=a;
		}
		else
		{
			k-=a;
		}
		i++;
	}
	if( abs(k) >= b)
	{  
		x.pb(1);
	}
	else
	{
		x.pb(2);
	}
	j++;
}
j=0;
while(j < p)
{
	cout << x[j]<<endl;
	j++;
}
}
