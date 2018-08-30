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
	ll n ,a, i = 1,p = 0 ;
	cin >> n >> a;
	a = 240 - a;
	while( i <= n)
	{
		if( ((i*(i+1))/2)*5 <= a )
		{
			p++;
			i++;
		}
		else
		{
			break;
		}
	}
	cout << p << endl;
}
