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
	ll n , k = 0, sum = 0, a,sum1 = 0,sum2 =0,dum1,dum2 ;
	cin >> n >> a;
	dum1 = n , dum2 = a;
	while( true)
	{
		while( dum1 || dum2)
		{
			sum1 += dum1%10;
			sum2 += dum2%10;
			dum1/=10,dum2/=10;
		}
		dum1 = n ,dum2 = a;
		if( sum1 >=n && sum2 >= n)
		{
		k = dum1+dum2;
		while( k)
		{
			sum  +=  k%10;
			k/=10;
		}
		if( sum <= a)
		{
			cout <<  dum1 << endl << dum2 << endl;
			return 0;
		}
		}
		dum1++,dum2++;
		sum1 = 0,sum2 = 0;
	}
}
		 
		
	
