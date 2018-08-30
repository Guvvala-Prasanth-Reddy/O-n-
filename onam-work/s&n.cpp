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
	ll n ,a, k =0, k1=0,i,j,f,kp ;
	cin >> n ;
	while( n--)
	{
		vector < ll > x;
		cin >> a;
		f = log(a)/log(2);
		kp=f;
		if(a- pow(2,f) >= 2)
		{
		kp = log( a - pow(2,f))/log(2);
		}
		for( i = 0 ; i <= kp+1 ; i++)
		{
			k = pow(2,i);
			for(j = f-1 ; j <= f+1 ; j++)
		{
			if( j == i )
			{
				continue;
			}
			k1 = pow(2,j);
			x.pb(abs(k1+k-a));
		}
		}
	sort(x.begin(),x.end());
		cout << x[0] << endl;
	}
}
