#include<stdio.h>
int gcd(int,int);
int main(void)

{
    int num,den;
    int num_simp,den_simp,whole;
    
    void fract_simplify(int,int,int*,int*,int*);
    
    
    printf("Numerator:");
    scanf("%d",&num);
    printf("Denominator:");
    scanf("%d",&den);
    
    printf("The fraction is : %d/%d",num,den);
    
    fract_simplify(num,den,&whole,&num_simp,&den_simp);
    
    printf("The simplified fraction is : %d + %d/%d",whole,num_simp,den_simp);
 
 
     fflush(stdin);


    getchar();

    return 0 ;
}



int gcd(int num,int den)
{    
    int g=0,i=1; 
    
    for(i=1;i<=den;i++)
    {if((num%i==0) && (den%i==0))
    g = i;
}
    printf("\n%d\n",g);
   return g;
}



void fract_simplify(int num,int den,int *whole,int *num_simp,int *den_simp )
{    int remainder;
     *whole=(int)(num/den);
     remainder= num -((*whole)*den);
     
     
     *num_simp=remainder/(gcd(remainder,den));
     *den_simp=den/(gcd(remainder,den));
     
}
     
     
    
    
