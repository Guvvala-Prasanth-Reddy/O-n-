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
	ll n ,i = 0, k = 0 ;
	str s1, s2;
	cin >> n >> s1 >> s2;
	while( i < n)
	{
			k += min(min(abs(s1[i] - s2[i]),abs( '9' - s1[i]) + abs(s2[i] - '0')+1) , abs('9'-s2[i])+abs(s1[i] - '0')+1);
			i++;
	}
	cout << k << endl;
}
	
