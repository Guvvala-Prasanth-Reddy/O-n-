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
	ll n ,a ;
	cin >> n >> a;
	cout << min(n,a) << " " << (max(n,a)-min(n,a))/2 << endl;
}
