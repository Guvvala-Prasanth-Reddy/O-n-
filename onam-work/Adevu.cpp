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
	ll n ,a,sum = 0, i =0, k;
	cin >> n >> a;
	while( i < n )
	{
		cin >> k;
		sum += k;
		i++; 
	}
	if( (n-1)*10+sum <= a)
	{
		cout << (a-sum)/5 << endl;
	}
	else
	{
		 cout << "-1" << endl;
		}
	}
