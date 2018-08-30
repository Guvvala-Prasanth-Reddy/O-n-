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
	ll a , i = 0,count=0;
	map < ll,ll >x;
	vector<ll>y,m;
		while(i < 4)
		{
			cin >> a ;
			m.pb(a);
			if(x.find(a) == x.end())
			{
				count++;
				y.pb(a);
			}
			y[a]++;
			i++;
		}
		if(count != 2)
		{
			cout << "-1" << endl;
			return 0;
		 }
		 else
		 {
			 
			 }
		 	
			
			
