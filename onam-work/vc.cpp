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
	ll n ,a ,k, i = 0;
	cin >> n;
	a = 1,k =0;
	while( k+(a*(a+1))/2 <= n)
	{
		k += (a*(a+1))/2; 
		a++;
	}
	cout << a-1 << endl;
}
	
