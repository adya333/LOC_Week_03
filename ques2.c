#include<stdio.h>
int Prime(int n1,int i)
{
    if(i==1)
    {
        return 1;
    }
    else if(n1 %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
         Prime(n1,i);
      }
}

int main()
{

    int n1,primeNo;
    printf(" enter number : ");
    scanf("%d",&n1);
    
   int i = n1/2;

    primeNo = Prime(n1,i);

   if(primeNo==1)
        printf("prime number. \n");
   else
      printf("not a prime number. \n");
   return 0;
}

