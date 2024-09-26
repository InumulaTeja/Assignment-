#include<stdio.h>
int main()
{
    int a[3][3],small,largest;
    printf("enter the matrix elements");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("value of matrix elements");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    small=largest=a[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]>largest)
            {
                largest=a[i][j];
            }
            if(a[i][j]<small)
            {
                small=a[i][j];
            }
        }
    }
    printf("max=%d",largest);
    printf("\n min=%d",small);
}
