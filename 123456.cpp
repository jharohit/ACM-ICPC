#include<stdio.h>
#define MAXSIZE 1000

int main(void)
{
    int series[MAXSIZE],sum=0,i,n;
    float average;
    
    do
    {printf("Enter the number of integers to sum:");
    scanf("%d",&n);}
    while(n<1 || n>100);
    
    for(i=1;i<=n;i++)
   {
    printf("Number is:");
    scanf("%d",&series[i]);
   
    }
    
   for(i=1;i<=n;i++)
   {
   
    sum+=series[i];
   }
        
    
    
    printf("SUM= %d\n",sum);
    
    average=(float)sum/n;
    printf("AVERAGE=%.2f\n",average);
    
        
    
    return 0 ;
}

    

    
