#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int x=11,y=6,z=2;
	char c='k',d='y';	
	printf("%d\n",(x==5 || y!=3));
	printf("%d\n",(!(x>9 && y!=23)));
	printf("%d\n",(x<=1 && y==6 || z<4));
	printf("%d\n",(c>='A' || c<='Z'));
	printf("%d\n",(5 && y!=8 || 0));
	printf("%d\n",(x>=y>=z));
return 0;

}
