#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	double whole[1003],frac[1003],tot1=0,tot2=0,ntot1=0,ntot2=0,avg1,avg2,final,price;
	int i,n;
	cin>>n;
	while(n!=0)
	{
		tot1=0,tot2=0,ntot1=0,ntot2=0;
		for(i=0;i<n;i++)
		{
			
			cin>>price;
			whole[i]=(int) price;
			frac[i]=((price-whole[i])*100);
			tot1+=whole[i];
			tot2+=frac[i];
		}
		avg1=(double)tot1/n;
		avg2=(double)tot2/n;
		for(i=0;i<n;i++)
		{
			if((whole[i]-avg1)>0)
				ntot1+=(whole[i]-avg1);
			if((frac[i]-avg2)>0)
				ntot2+=(frac[i]-avg2);
		}
		ntot2=ntot2/100;
		//cout<<" "<<ntot1<<" "<<ntot2;
		final=ntot1-ntot2;
	printf("$%.2lf\n",final);
	cin>>n;
	}
}

	
	    



		 
		




		 
