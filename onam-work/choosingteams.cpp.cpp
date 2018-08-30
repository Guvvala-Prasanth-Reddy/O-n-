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
	ll n ,a , i = 0, k;
	cin >> n >> a;
	vector < ll > x;
	while( i < n)
	{
		cin >> k ;
		x.pb(k);
		i++;
	}
	sort(x.begin(), x.end());
	i = 0, k=0;
	while( abs(5 - x[i]) >= a  && i < n)
	{	 	
		k++;
		i++;
	}
	cout << k/3 << endl;
}
