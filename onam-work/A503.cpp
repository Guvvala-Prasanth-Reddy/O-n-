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
	ll n ,a , b, c , d, t1,t2,t3,t4, i =0,k,l=0;
	cin >> n >> a >> b >> c >> d; 
	vector< ll > x;
	k = d;
	while( d--)
	{
		vector < ll > y;
		cin >> t1 >> t2 >> t3 >> t4;
		l=abs(t3-t1);
		if( t2 == b )
		{
			l+=abs(t2-b)+abs(t4-b);
		}
		else if( t2 == c)
		{
			l+=abs(t2-c)+abs(t4-c);
		}
		else{
			for( ll j = b ; j <= c ; j++)
			{
				y.pb( abs(t2-j)+abs(t4-j));			
			}
		   sort(y.begin(),y.end());
		   l+=y[0];
		}
		x.pb(l);
	}
		while(i < k)
		{
			cout << x[i] << endl;
			i++;
		}
	}
