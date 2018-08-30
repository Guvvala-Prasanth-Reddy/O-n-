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
	ll n ,a, k = 1 ;
	cin >> n >> a;
	n = n%10;
	while( (n*k)%10 != a &&  (n*k)%10 != 0)
	{
		k++;
	}
	cout << k << endl;
}
