#include<bits/stdc++.h>
#define ll long long
#define str string
#define pb  push_back

using namespace std ;
int main()
{
	ll n ,a ,i=0 ,k ,m,j=0  ; 
	cin >> n >> a;
	vector < ll > x;
	map < ll , ll > y;
	while(i < n)
	{
		cin >> k >> m;
		for(j = k ; j <=m ; j++)
		{
			y[j]=1;
		}
		i++;
	}
	j = 1,k=0;				
	while(j <= a)
	{
		if(y.find(j) == y.end())
		{
			k++;
			x.pb(j);
		}
		j++;
	}
	cout << k<<endl;
	j =0 ;
	while( j < x.size())
	{
		cout << x[j] << " ";
		j++;
	}
}
