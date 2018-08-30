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
	unsigned ll n ,a	 ;
	cin >> n >> a;
	if( a != 10)
	{
		while(n--)
		{
			cout << a;
		}
	}
	else
	{
		if( n != 1)
		{
		cout << 1;
		n--;
		while(n-- )
		{
			cout << 0;
		}
		}
		else
		{
			cout << "-1" ;	
		}
		}
	} 
