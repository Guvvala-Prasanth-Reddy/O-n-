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
	unsigned ll n ,a , i= 0 ,j =2, k,flag = 0;
	cin >> n;
	vector < unsigned ll > x;
	map < unsigned ll , str > l;
	while( i < n)
	{
		cin >> a;
		if( l.find(a) == l.end())
		{
		k = pow(( unsigned ll)sqrt(a) , 2 );
		if( k == a && a != 1 )
		{
			k = ( unsigned ll)sqrt(a);
			while( j*j <= k)
			{
				if( k % j  == 0)
				{
					flag = 1;
					break;
				}
				j++;
			}
			if( flag == 0)
			{
				cout << "YES" << endl;
				l[a] = "YES";
			}
			else
			{
				cout << "NO" << endl;
				l[a] = "NO";
			}
			flag = 0, j =2;
		}
		else
		{
			cout << "NO" << endl;
			l[a] = "NO";
		}
	 }
	 else
	 {
		 cout << l[a] << endl;
		}
		i++;
 }
}
	
