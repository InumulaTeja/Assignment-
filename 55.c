                                         #include<stdio.h>
int main()
{
    int arr_num[10],even=0,odd=0;
    printf("entr the value of arr_num \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr_num[i]);
    }
    for(int i=0;i<10;i++)
    {
        if(arr_num[i]%2==0)
        {
            even=even+1;
        }
        else
        {
            odd=odd+1;
        }
    }
    printf("odd numbers=%d",odd);
    printf("\n");
    printf("even numbers=%d",even);
}                                  
