#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
int len,max=0,i,a,b;
int length(int);
cin>>a;
cin>>b;
for(i=a;i<=b;i++)
{
	len=length(i);
	if(len>max)
		max=len;
}
cout<<a<<" "<<b<<" "<<max;
return 0;
}
int length(int n)
{
	int c=0;
	while(n!=1)
	{
		if(n%2==0)
		n=n/2;
		else
		n=(3*n)+1;
		c+=1;
	}
	return (c+1);
}




