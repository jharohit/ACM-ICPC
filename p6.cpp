#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int n,i,k,p,s1,s2,s3,s4,j,rem,m,q,a;
		cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>k;
		cin>>p;
		if(k>=1600 || p>=25000)
		{
			i--;
			continue;
		}
		s1=0,s2=0;
		for(j=0;j<k;j++)
		{
			cin>>a;
			cin>>q;
			if(a>=p)
			{
				j--;
				continue;
			}
			s1+=(int)pow((double)a,(double)k);
			s2+=q;
		}
		s3=s1-s2;
		//cout<<endl<<s3;
		rem=-1;
		m=0;
		while(rem!=0)
		{
			s4=s3+(4*m);
			if((s4%p)==0)
				rem=0;
		m++;
		}
		cout<<endl<<m-1;
	}
	return 0;
}






