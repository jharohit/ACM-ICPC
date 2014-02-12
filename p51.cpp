#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,j,k,p,res;
	double d;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>p;
		d=(1.0/3.0);
		for(j=(int)ceil(sqrt((double)p));j<=p;j++)
		{
			//cout<<endl<<j;
			for(k=(int)ceil(sqrt((double)p));k>=2;k--)
			{
				//cout<<endl<<k;
				res=(int)(pow((double)j,2)+pow((double)k,2)-(j*k));
				//cout<<res;
				if(res==p)
				{
					cout<<endl<<p<<" "<<k<<" "<<j<<"\n";
					j=p+1;
					k=1;
				}
			}
		}
      //cout<<j<<k;
	}
	return 0;
}
