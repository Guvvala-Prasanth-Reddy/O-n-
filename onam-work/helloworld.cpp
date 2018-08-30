#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007

using namespace std;

int main()
{
 int n,k;
   cin>>n>>k;
      vector<pair<int,int> > v;
      int b[k+1];
         memset(b,0,sizeof(b));
        vector<int> f;
      for(int i=0;i<n;i++)
      {
		     int a,c;
		        cin>>a>>c;
		       
		           v.pb(mp(a,c));
		           b[a]++;
		  }
		  int max=0;
		     for(int i=1;i<=k;i++)
		     {
				    if(b[i]>b[max])
				    {
                          			max=i;			
						}
			 }
			 
			 if(max==1)
			 {
				 cout<<"0";
				 }
				 else
				 {
					   sort(v.begin(),v.end());
					   int s,flag=0;
					   for(int i=0;i<n;i++)
					   {
						      
						        if(v[i].ff!=max)
						        {
									  
									   f.pb(v[i].ss);
									}
									else
								{	
									if(flag==0)
									  {
										    flag=1;
										    s=i;
										  }
										  
										  }        
						   }
				
						   sort(f.begin(),f.end());
						   int y=0;
						   ll ans=0;
						   int yu=0;
						        while(b[1]<=b[max])
						        {
									int yui=f.size();
											     if(y==yui)
											     {
													 yu=1;
													 }
									if(yu==0)  
									   {
										    
										   if((2*f[y])>=v[s].ss)
									   {
										        if((b[max]-b[1])>=1)
										        {
													ans=ans+v[s].ss;
													  s++;
													  b[max]--;
													  b[1]++;
													}
													else
													{
														   if(f[y]>v[s].ss)
														   {
															      ans=ans+f[y];
															      y++;
															      b[1]++;
															   }
															   else
															   {
																     ans=ans+v[s].ss;
																     s++;
																     b[1]++;
																     b[max]--;
																   }
														}
										   }
										   else
										   {
											     
											      b[1]++;
											         ans=ans+f[y];
											         y++;
											         
											   }
											   
											     
												 }
												 else
												 {
													 ans=ans+v[s].ss;
													 s++;
													   b[max]--;
													     b[1]++;
													 }
									
									  
									}
						 cout<<ans;     
					 }
}
 
	
