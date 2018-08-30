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
	ll l;
	cin >> l;
	while( l--)
	{
	str n ,a;
	ll k =0,p1 = 0,p2 =0 ;
	cin >> n >> a;
	while( k < n.size())
	{
		p1 += n[k]-'0';
		k++;
	}
	k = 0;
	while( k < a.size())
	{
		p2 += a[k]-'0';
		k++;
	}
	cout << ((p1%3)*(p2%3)) << endl;
}
}
