#include<stdio.h>
int main()
{
    int n,l;
    printf("enter value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int k=1;k<=i;k++)
        {
            l=i-k;
            if(l==0)
            {
                printf(" ");
            }
            else
            {
                printf("%d",l);
            }
        }
        printf("\n");
    }
}
