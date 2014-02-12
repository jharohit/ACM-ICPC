#include<stdio.h>

int main(void)
{
	int i;
	for(i=5;i>=1;i--)
	{
		printf("%.*s\n",i,"*****");
	}
	
	for(i=2;i<=5;i++)
	printf("%.*s\n",i,"*****");

	return 0;
}