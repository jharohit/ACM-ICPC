#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(void)

 {
    void fract_simplify(int,int);
    int gcd(int,int);
    int num,den;
    int hcf,value1,value2;
    
    printf("num = \n");
    scanf("%d\n",& num);
	
	printf("den = \n");
    scanf("%d\n",& den);
    
    printf("The fraction is = %d/%d",num,den);
    
    value2 = num%den;
    
    hcf = gcd(value2,den);
    
    
    fract_simplify(value2,den);
    
        
    fflush(stdin);

getchar();


return 0;

}


int gcd(int num1,int num2)
{
    int gcd,i;
    for(i=1; i<=num2; i++)
    {
           if( num1%i==0 && num2%i==0)
           gcd=i;
    }
    
return gcd;
}   

void fract_simplify(int num1,int num2)
{
    int hcf,num1a,num2a;
    
    
    hcf = gcd(num1,num2);
    num2a = num2/hcf;
    num1a = num1/hcf;
    
    printf("The fraction part of the fraction is %d/%d",num1a,num2a);
    
}