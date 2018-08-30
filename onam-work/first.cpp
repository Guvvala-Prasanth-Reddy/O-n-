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
	ll t,b,c,a,i,j;
	string x,y;
	cin>>t;
	while(t--){
		cin>>x;
		cin>>y;
		b=0;
		c=0;
		a=1;
		j=99;
		for(i=0;i<3;i++){
			if(x[i]=='o' && y[i]=='o'){
				c++;
			}
		}
		vector < ll >p;
		vector < ll >q;
		for(i=0;i<3;i++){
			if(x[i]=='b'){
				p.push_back(a);
			}else if(x[i]=='o'){
				p.push_back(b);
			}else{
				p.push_back(j);
			}
		}
		for(i=0;i<3;i++){
			if(y[i]=='b'){
				q.push_back(a);
			}else if(y[i]=='o'){
				q.push_back(b);
			}else{
				q.push_back(j);
			}
		}
		for(i=0;i<3;i++){
			if(p[i]==1 && q[i]==1){
				b++;
			}else if(p[i]+q[i]==1){
				if(c==0){
					c++;
				}else{
					b++;
				}
			}else{
				if(p[i]==1 || q[i]==1){
					b++;
				}else if(p[i]==0 || q[i]==0){
					if(c==0){
						c++;
					}
				}
			}
		}
		if(b>=2 && c>=1){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
	}
}
