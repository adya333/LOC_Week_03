#include<stdio.h>
int evenodd(int x)
{
    int c=0;
    if(x%2==0)
     c=0;//EVEN
    else
     c=1;//ODD
    return c;
}
int main(){
  int a;
  printf("Enter the number:\n");
  scanf("%d",&a);
  int b=evenodd(a);
  if(b==0)
   printf("\nEven");
  else
   printf("\nODD");
  return 0;
}