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
	ll n ,a,k ,h,i=0,count = 2,c=0;
	cin >> n >> a;
	vector < ll  > l,r;
	while( i <  n)
 {
		cin >> h;
		l.pb(h);
		i++;
	}
	i = 0;
	while( i < n -1)
	{
		c=0;
		for(k = l[i]+a ; k < l[i+1] ; k++ )
		{
			if(( k - l[i] >=a) && (l[i+1] - k >=a))
			{
				count++;
				if( k - l[i] > a && l[i+1] - k > a )
				{
					k = k+a;
				}
			}
				c++;
				
				if(c == 2)
				{
					break;
				}
			//cout << k << " "<< count<< " "<<l[i+1]<<" "; 
		}
		
		//cout << k<<endl;
		i++;
	}
	cout << count << endl;
}
