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
	ll n ,a , b;
	cin >> n >> a >> b;
	cout << min(min(min(2*(n+a),a+b+n),2*n+2*b),2*a+2*b);
}
