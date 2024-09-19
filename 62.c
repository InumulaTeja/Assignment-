#include<stdio.h>
int main()
{
    int a[5],b[5];
    printf(" enter the a elements ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        b[i]=a[4-i];
        printf("%d\t",b[i]);
    }
}
  
