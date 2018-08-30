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
	ll a , i = 0;
		cin >> a;
		if( a%2 == 1)
		{
			cout << (a-3)/2+1 << endl;
			while( i < a-3)
			{
				cout << "2"<<" ";
				i=i+2;
			}
			cout << "3" << endl;
		}
		else
		{
			cout << a/2 << endl;
			while( i < a)
			{
				 cout << "2"<<" ";
				 i+=2;
			}
		}
	}
