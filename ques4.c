#include<stdio.h>
int swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("\nthe first number is : %d",a);
    printf("\nThe second number is : %d",b);
    return 0;
}
int main()
{
    int x,y;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("\nEnter the second number:");
    scanf("%d",&y);
    swap(x,y);
    return 0;
}