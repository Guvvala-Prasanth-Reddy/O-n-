#include<bits/stdc++.h>
#define ll long long
#define str string
#define pb  push_back

using namespace std ;
int main()
	{
	ll n ,a ,sum=0, b ,i = 0,range = 0;
	vector < ll > x; 
	cin >> n >> a;
	while(i < n)
	{
		cin >> b;
		x.pb(b);
		i++;
	}
	sort(x.begin(),x.end());
	for(i=0; i < a ; i++)
	{
		sum += x[n-i-1];	
	}
	cout << sum << endl;
	b = x[0];
	k= 0;
	for( i = 0 ; i < n ; i++ )
	{
			if(  x[i] > b )
			{
				cout << 
}
}	
	
