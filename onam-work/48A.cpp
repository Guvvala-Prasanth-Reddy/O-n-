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
	ll n , a ,c=0,i,k,p=0;
	cin >> n >> a;
	while(n--)
	{
		cin >> k;
		p+=k;
		cout << p/a- c <<  " ";
		c=p/a; 
	}
	}
