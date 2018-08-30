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
	ll n ,a, i  = 0,j=0,len,k=0 ,u=0,temp ;
	cin >> n;
	str s;
	vector < str > x;
	while( j < n )
	{
		cin >> len >>  s;
		for( i = len/2,u=0 ; i < len ; i++)
		{
			//cout << s[i]<<" " << s[len/2  - u - 1] << endl;
			temp = s[len/2  - u - 1];
		
			if( s[i] == temp)
			{
				k++;
			}
			if(abs(s[i] - temp) ==  2 )
			{ 
				k++;
			}
			u++;
		}
		u=0;
		if( k  == len/2 )
		{
			x.pb("YES");
		}
		else
		{
			x.pb("NO");
		}
		j++;
		k =0;
	}
	while( k < n)
	{
		cout << x[k] << endl;
		k++;
	}
}

