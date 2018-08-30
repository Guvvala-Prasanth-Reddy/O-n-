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
	map < str , ll >x;
	str a;
	while( n--)
	{
		cin >> a;
		x[a]++;
	}
	cout << x["Tetrahedron"]*4+x["Cube"]*6+x["Octahedron"]*8+x["Dodecahedron"]*12+x["Icosahedron"]*20 << endl;
}
		
