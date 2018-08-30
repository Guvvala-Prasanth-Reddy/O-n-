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
	ll n , m, k,sum = 0,t1 = 0 , t2 =  0,s1 = 0 , s2 = 0;
	cin >> n >> m;
	k = n+m;
	t1 = n , t2 = m;
	while( true)
	{
		t1 = n,t2 = m;
		while( t1 || t2)
		{
			sum += t1%10 + t2%10;
			s1 += t1%10,s2 += t2%10;
			t1/=10,t2/=10;
		}
		if( sum <= m && (s1 >= n && s2 >=n))
		{
			cout << n << " "<<m;
			return 0;
		}
		n++,m++;
}
}
