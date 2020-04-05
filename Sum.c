#include<stdio.h>
int main()
{
    int arr[100],sum=0,i,n;
    printf("Enter the size of array :  ");
    scanf("%d",&n);
    printf("Enter %d elements in the array : ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nthe sum is %d",sum);


}
