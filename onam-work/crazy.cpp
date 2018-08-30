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
	ll n ,a, b = 0, l,count  = 0, i = 0;
	cin >> n >>	a;	
	while( i < n)
{
	cin >> l;
	if( l - b > a )
	{
		count = 0;
	}
	b = l;
	count++;
	i++;
}
	cout << count <<  endl;
}
