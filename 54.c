#include<stdio.h>
int main()
{
    int arr_numbers[10],sum=0;
    printf("enter the array numbers");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr_numbers[i]);
    }
    for(int i=1;i<10;i++)
    {
        sum=sum+arr_numbers[i];
    }
    printf("sum of arr_numbers=%d",sum);
}
