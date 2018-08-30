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
	ll n ,a, i = 0;
	cin >> n >> a;
	while( true)
	{
		if( n > a)
		{
			break;
		}	
			else
			{
				n*=3,a*=2;
			}
			i++;
		
	}
	cout << i << endl;
	}
