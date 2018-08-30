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
	ll n , i = 0,com=0,b1=0,b2=0;
	str a,b;
	cin >> n;
	
	while( n--)
	{
		com =0 ,b1=0,b2=0,i=0;
		cin >> a >> b;
		while( i < 3)
		{
			if(( a[i] == 'b' && b[i] == 'o' )|| (a[i] == 'o' && b[i] == 'b'))
			{
				com++;
			}
			else if(a[i] == 'b' || b[i] == 'b')
			{
				b1++;
			}
			else if(a[i] == 'o'  || b[i] == 'o')
			{
				b2++;
			}
			i++;
		}
		if(com == 3 || ((com == 2 && (b1 == 1 || b2 == 1 )) ||((b1 == 2 && b2 ==1) ||((com == 1 && b1 ==2)||(com ==1 &&( b1 ==1 && b2 ==1)))) ))
		{
			cout << "yes"<< endl;
		}
		else
		{
			cout << "no"<< endl;
		}
	}
}
