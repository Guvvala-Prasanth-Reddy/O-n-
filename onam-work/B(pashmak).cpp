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
	ll n ,a ,mini,maxi, countm = 1,countma = 1, i = 1;
	cin >> n;
	vector < ll > x;
	map < ll , ll >y;
	cin >> a;
	y[a] = 1;
	maxi = a;
	mini = a;
	while( i < n )
	{
		cin >> a;
		if( a < mini)
		{
			mini = a;
		}
		if( a > maxi)
		{
			maxi = a;
		}
		y[a]++;	
		i++;
	}
	if( maxi == mini )
	{
		if( y[maxi] != 2)
		{
		y[maxi] = y[maxi]*(y[maxi]-1)/2;
		}
		else
		{
			y[maxi]= 1;
		}
		cout << maxi - mini << " " << y[maxi] << endl;
		 return 0;
	}		
	cout << maxi - mini << " "<< y[mini]*y[maxi] << endl; 
}
