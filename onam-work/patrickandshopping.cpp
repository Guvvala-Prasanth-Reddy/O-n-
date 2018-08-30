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
	ll n,i=0 ,a ;
	vector < ll > x;
	while(i < 3 )
	{
		cin >> a;
		x.pb(a);
		i++;
	}
	if(x[0]==x[1] && x[1] == x[2] )
	{
		cout << x[0]*3<<endl;
		return 0;
	}
	sort(x.begin(),x.end());
	cout << x[0]*2+x[1]*2<<endl;
}
