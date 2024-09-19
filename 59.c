#include<stdio.h>
int main()
{
    int a[10],b[10];
    printf("enter a elements");
    for(int i=0;i<10;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("enter b elements");
   for(int i=0;i<10;i++)
   {
       scanf("%d",&b[i]);
   }
   for(int i=0;i<10;i++)
   {
       a[i]=a[i]+b[i];
       b[i]=a[i]-b[i];
       a[i]=a[i]-b[i];
   }
   printf("swapped array of a\n");
   for(int i=0;i<10;i++)
   {
       printf("%d\t",a[i]);
   }
   printf("swapped array of b\n");
   for(int i=0;i<10;i++)
   {
       printf("%d\t",b[i]);
   }
}
