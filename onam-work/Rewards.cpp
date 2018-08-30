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
	ll n,a1,a2,a3,b1,b2,b3,count = 0;
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
	count = (a1+a2+a3)/5 + (b1+b2+b3)/10;
	if((a1+a2+a3)%5 !=0)
	{
		count++;
	}
	if( (b1+b2+b3)%10 !=0)
	{
		count++;
	}		
	if( n - count >=0)
	{
		 cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
}

	
