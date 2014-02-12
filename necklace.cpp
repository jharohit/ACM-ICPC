#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string>
using namespace std;
int main()
{
	int n,c=1,d=1,great1=0,great2=0,i,j;
	ifstream fin ("beads.in");
    ofstream fout ("beads.out");
	string neck;
		char s1,s2;
	fin>>n;
	fin>>neck;
	for(i=0;i<n;i++)
	{
		s1=neck[i];
		  j=i+1;
		while(j!=i)
		{
			if(c==n)
				break;
			if(j>(n-1))
				j=0;
			if((neck[j]==s1)|| (neck[j]=='w'))
				c+=1;
			else
				break;
		j+=1;
		}
		if(i!=0)
		{
			s2=neck[i-1];
		j=i-2;
		while(j!=i)
		{
			if(d==n)
			break;
			if(j<0)
				j=n-1;
			if((neck[j]==s2)|| (neck[j]=='w'))
				d+=1;
			else
				break;
		j-=1;
		}
		}
		else
		{
			if(d==n)
				break;
			s2=neck[n-1];
		j=n-2;
		while(j!=i)
		{
			if(j<0)
				j=n-1;
			if((neck[j]==s2)|| (neck[j]=='w'))
				d+=1;
			else
				break;
		j-=1;
		}
		}
		if(c>great1)
			great1=c;
		if(d>great2)
			great2=d;
		c=1;
		d=1;
	}
	fout<<great1<<endl<<great2;

return 0;
}








		







