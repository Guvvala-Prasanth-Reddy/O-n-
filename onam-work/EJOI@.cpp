#include<bits/stdc++.h>
#define ll long long
#define str string
#define pb  push_back

using namespace std ;
int main()
{
	ll n ,len, a, i = 0,k,flag=0,count=0; 
	cin >> n >> a;
	map <ll,ll>::iterator l;
	map < ll,ll >x;
	while(i < n)
	{
		cin >> k;
		if(x.find(k&a) != x.end())
		{
			x[k&a]+=1;
			if(a==k )
			{
				flag++;
			}
			if(k&a == a)
			{
				count++;
			}
		}	
		else
		{
			x[k&a]=1;	
		}
		i++;	
}
	if(flag > 1 || count > 1)
	{
		cout << "0" << endl;
		return 0;
	}
	else if(flag == 1 && count == 1 )
	{ 
		cout << "1" <<endl;
	}
	else
		{	
		cout << 
		}
