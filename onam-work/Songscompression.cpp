#include<bits/stdc++.h>
#define ll long long
#define str string
#define pb  push_back

using namespace std ;
int main()
{
	ll n ,a,sum = 0 ,p,q, i = 0 , j = 0 ,k=0;
	cin >> n >> a;
	vector < ll > x,y;
	while( i < n)
	{ 
		cin >> p >> q;
		x.pb(p),y.pb(p-q);
		sum+=p;
		k+=(p-q);
		i++;
	}
	if(sum <= a )
	{
		cout << "0";
		return 0 ;
	}
	else if(sum - k > a)
	{
		cout << "-1";
		return 0;
	}
	else
	{
		i = y.size()-1;
		sort(y.begin(),y.end());
		while(i >=0)
		{
			if(sum > a)
			{
			sum-=y[i];
			i--;
			}
			if(sum <=a)
			{
			cout << y.size()-(i+1)<<endl;
			return 0 ;
			}
		}
	}
	cout << "-1";
}	 	
		
