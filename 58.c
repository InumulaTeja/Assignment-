#include<stdio.h>
int main()
{
    int a[10],b[10],c[10];
    printf("enter the a elments");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the b elements");
    for(int j=0;j<10;j++)
    {
        scanf("%d",&b[j]);
    }
    for(int k=0;k<10;k++)
    {
            c[k]=a[k]+b[k];
        printf("c elements=%d",c[k]);
        printf("\n");
    }
}
