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
	ll n ,a,b,i=0,j=0,min=0,min1=0,f=0 ;
	cin >> n;
	while(  i < n )
	{
		cin >> a >> b;
		if( i == 0 )
		{
			min = a,min1 = b;  
		}
		if( min < a && min1 > b)
		{
			cout << "Happy Alex" << endl;
			return 0;
		}
		else if( a != b)
		{
			min = a, min1 = b;
		}
		i++;
	}
	cout << "Poor Alex" << endl;	
}
