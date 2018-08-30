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
	ll n ,a , i = 0,sum = 0,o = 0;
	cin >> n;
	while( i < n)
	{
		cin >> a;
		if( a == -1 && sum+a < 0)
		{
			o++;
		}
		else if( a > 0 || sum >= 0)
 		{
			sum+=a;
		}
		i++;
	}
	cout << o << endl;
}
