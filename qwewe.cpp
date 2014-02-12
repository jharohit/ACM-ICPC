#include<stdio.h>
#include<ctype.h>

int main(void)
{
    int num1,num2,ans;
    char ch;
    
    printf("num1 (operation) num2 :");
    scanf("%d",&num1);
	scanf("%c",&ch);
	scanf("%d",&num2);
    
    if(ch=='+')
    {
		ans=num1+num2;
    printf("The sum is : %d ",ans);
	}
    
    if(ch=='-')
    {   
	ans=num1-num2;
    printf("The difference is : %d ",ans);
	}
        
    if(ch=='*')
    {
	ans=num1*num2;
    printf("The product is : %d ",ans);
	}
    
    if(ch=='/')
    {    
		ans=num1/num2;
    printf("The quotient is : %d ",ans);
    }

  
return 0 ;
}