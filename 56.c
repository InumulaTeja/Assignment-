#include<stdio.h>
int main()
{
    int arr_num[10],pos=0,neg=0;
    printf("entr the value of arr_num \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr_num[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(arr_num[i]>0)
        {
            pos=pos+1;
        }
        else if(arr_num[i]<0)
        {
            neg=neg+1;
        }
    }
    printf("positive numbers=%d",pos);
    printf("\n");
    printf("negative numbers=%d",neg);
}
