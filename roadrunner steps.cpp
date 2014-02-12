#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
void main()
{
	int n,i,total,f1,f2;
	int d,r1,r2,r3;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>d;
		if(d<3)
			total=d;
		else
			total=d+(d/2)+(d/3);
	cout<<(total%31153);
	if(i!=(n-1))
	cout<<endl;
	}
}

