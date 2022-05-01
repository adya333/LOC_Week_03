#include<stdio.h>
int maxm(int ar[],int x)
{
   
    int res=ar[0];
    for(int i=0;i<x;i++)
    {
        if(res<ar[i])
         res=ar[i];
    }
    
    return res;

}
int main()
{
    int l=0;
    printf("Enter the length:");
    scanf("%d",&l);
    int arr[100];
    for(int i=0;i<l;i++)
    {
        scanf("%d",&arr[i]);
    }
   printf("\nMaximum element in the array: %d",maxm(arr,l)); 
   return 0;

}