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
	ll n , i =  0 ,f1=0,f2=0,f3 =0 ,j=0;
	str a,b;
	vector < str > x;
	cin >> n;
	while( j < n)
	{
		cin >> a >> b;
		while(i < 3)
		{
			if(a[i] == 'b' || b[i] == 'b')
			{
				if(f1 == 1)
				{
					f3 =1;
				}	
				f1 = 1;
				
			}
			 else if(a[i]=='o'|| b[i] == 'o')
			{
				f2 = 1;
			}
			//cout<<endl;
			//cout << a[i] <<" "<< b[i]<< " "<< f1 <<" "<< f2 <<" "<< f3 <<" " << endl;
			i++;
		}
		if( f1 &&(f2 && f3 ))
		{
			x.pb("yes");
		}
		else
		{
			x.pb("no");
		}
		f1=0;
		f2=0;
		f3 =0 ;
		i = 0;
		j++;
	}
	i = 0;
	while( i < n)
	{
		cout << x[i] << endl;
		i++;
	}
}
	
