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
	ll n ,a , i = 0, k,flag= 0,min;
	cin >> n >> a;
	while( i < n)
	{
		cin >> k;
		if( a%k == 0 )
		{
			if( !flag)
			{
				flag = 1;
				min = a/k;
			}
			if( min > a/k)
			{
				min = a/k;
			}
		}
		i++;
	}
	cout << min;
}
	
	
