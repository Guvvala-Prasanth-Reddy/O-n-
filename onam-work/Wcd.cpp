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
	ll n ,a, b , i = 0 ,f2=0,f3 =1 ,f5 =2 , j = 0,c=0;
	cin >> n;
	vector < ll >x;
	x.pb(2);
	x.pb(3);
	x.pb(5);
	while( i < n )
	{
		cin  >> a >> b;
		while( j < 3)
		{
			if( a%x[j] == 0 || b%x[j] == 0)
			{
				if( x[j] == 2)
				{
					f2=1;
				}
				else
				{
					f2 =0;
				}
				if( x[j] == 3)
				{
					f3 = 1;
				}
				else
				{
					f3 = 0;
				}
				if(x[j] == 5)
				{
					f5 = 1;
				}
				else
				{
					f5 = 0;
				}
			}
			else
			{
				c++;
			}
			j++;		
		}
		i++;
	}
	if( c == 3)
	{
		cout << "-1" << endl;
	}
	else if( f2 == 1)
	{
		cout << "2" << endl;
	}
	else if( f3 == 1)
	{
		cout << "3" << endl;
	}
	else if(f5 == 1)
	{
		cout << "5" << endl;
	}
	else
	{
		cout << "-1" << endl;
}
}	
