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
	ll n ,a , k = 0, i =0,sum1=0,sum2=0;
	cin >> n;
	while( i < n )
	{
		cin >> a;
		sum1 += a;
		i++;
	}
	i = 0;
	k = 1;
	while( k < 3)
	{
		while( i < n - k)
		{
		cin >> a ;
		sum2 += a;
		i++;
		}
		cout << sum1 - sum2 << endl;
		sum1 = sum2;
		sum2 = 0;
		k++;
		i = 0;
	}
}
