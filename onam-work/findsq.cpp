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
	ll n ,a , flag = 0, start = 0,end =0 , i =0 , j =0,p=0;
	cin >> n >> a;
	str k;
	vector < str > x;
	while( i < n)
	{
		j = 0;
		cin >> k;
		while( j < a)
		{
			if( k[j] == 'B')
			{
				flag = 1;
				p = j;
				end = j;
				j++;
				break;
			}
			j++;
		}
		for( ; j < a ; j++)
		{
			if( k[j] != 'B')
			{
				start = 1;
				end = j-1;
				break;
			}
		}
		if(!start)
		{
			end = j -1;
		}
		if( flag )
		{
			cout << (((i+1)+(end - p)/2))<<" "<<(((p)+(end))/2)+1;
			return 0;
		}
		start = 0, end = 0,p = 0;
		i++;
	}
}
		
