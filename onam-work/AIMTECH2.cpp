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
	ll n , m, n1, m1,s1=0,s2=0,s=0,t, i =1,a,b;
	cin >> n >> m;
	a = n , b=m,t = n+m;
	while( i )
	{	
		n1 = a,m1 =  b , t = a+b;
		while( n1 || (m1 || t))
		{
			s1 += n1%10,s2 += m1%10,s += t%10;
			n1/=10,m1/=10,t/=10;
		}
		if( s1 >= n && (s2 >= n && s <= m ))
		{
			cout << a <<endl << b;
			return 0;
		}
		if( a < b)
		{
			a++;
		}
		else
		{
			b++;
		}
		i++,s=0,s1=0,s2=0;
	}
}
		
		
		
