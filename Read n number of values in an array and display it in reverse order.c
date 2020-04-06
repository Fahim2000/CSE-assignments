#include<stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter the elements : ");
    for(i=1;i<=5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Reversed elements of array");
    for(i=5;i>=1;i--)
    {
        printf("\n%d",arr[i]);
    }


}
