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
	ll n ,a , i =0,j=0,count=0,n1;
	cin >> n;
	vector < ll > x,y;
	while( i < n)
	{
		cin >> a;
		x.pb(a);
		i++;
	}
	cin >> n1;
	i = 0 ;
	while( i < n1)
	{
		cin >> a ;
		y.pb(a);
		i++;
	}
	sort(x.begin(),x.end());
	sort(y.begin(),y.end());
	i=0;
		while( j < n1 && i < n)
		{
			if(abs(x[i] - y[j]) <=1)
			{
				count++;
				i++,j++;
			}
			else if(x[i] > y[j])
			{
				j++;
			}
			else
			{
				i++;
			}	
	}
	cout << count << endl;
}
	
