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
	ll k2 ,k3,k5,k6,max = 0, in = 0  ;
	cin >> k2 >> k3 >> k5 >> k6;
	in = min(min(k2,k5),k6);
	max = 256*in;
	k2=k2-in,k5=k5-in,k6=k6-in;
	max+=min(k2,k3)*32;
	cout << max << endl;
}
