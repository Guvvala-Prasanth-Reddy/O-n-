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
	ll n ,a,k ,a1,b1,flag = 0;
	cin >> n;
	while( n--)
	{
		map < ll , ll > x;
		vector < ll > y;
		cin >> a;
		cin >> a1 >> b1;
		if( !x[a1])
		{
			y.pb(a1);
			x[a1]++;
		}
		if( !x[b1])
		{
			y.pb(b1);
			x[b1]++;
		}
		else
		{
			cout << 0 << endl;
			continue;
		}
		a--,a--;
		while(  a--)
		{
			cin >> k;
			if( x[k] > 1)
			{
				cout << 0 << endl;
				flag = 1;
				break;
			}
			if( k < a1)
			{
				if( a1 < b1)
				{
					b1 = a1;
				}
				a1 = k;
			}
			else if( k < b1)
			{
				if( b1 < a1)
				{
					a1 = b1;
				}
				b1 = k;
			}
			x[k]++;
		}
		if ( !flag)
		{
		cout << abs(a1-b1) << endl;
		}
		flag = 0;
	}
}
