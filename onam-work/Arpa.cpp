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
	ll n ;
	cin >> n;
	if( n%4 == 1)
	{
		cout << "8" << endl;
	}
	else if( n %4 == 2)
 	{
		cout << "4" << endl;
	}
	else if( n %4 == 3)
	{
		cout << "2" << endl;
	}
	else if(n != 0)
	{
		cout << "6" << endl;
	}
	else
	{
		cout << "1" << endl;
	}
}
