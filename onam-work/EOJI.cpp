#include<bits/stdc++.h>
#define ll long long
#define str string
#define pb  push_back


using namespace std ;
int main()
{
	ll n , i =0,x,s1=0,s2=0; 
	cin >> n;
	while(i<n)
	{	
		cin >> x;
		s1+=x;
		i++;
	}
	i=0;
	while(i<n)
	{
		cin >>x;
		s2+=x;
		i++;
	}
	if(s1>=s2)
	{
		cout << "YES"<<endl;
	}
	else
	{
		cout << "NO"<<endl;
	}
}
	
	
