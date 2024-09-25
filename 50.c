#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            switch(i)
            {
                case 1:printf("A");
                       break;
                case 2:printf("B");
                       break;
                case 3:printf("C");        break;
                case 4:printf("D");
                       break;
                case 5:printf("E");        break;
            }
        }
        printf("\n");
    }
}
