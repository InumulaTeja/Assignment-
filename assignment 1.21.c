#include<stdio.h>
int main(){
float a,b;

    printf("enter two numbers:");

    scanf("%f %f",&a,&b);

char op;

    printf("enter an arthimatic operator(+,-,*,/):");

    scanf(" %c",&op);

switch(op){

case '+' :printf("sum is %f",a+b);

break;

case '-':printf("sub is %f",a-b);

break;

case '*' :printf("mul is %f",a*b);

break;

case '/' :printf("div is %f",a/b);

break;

default:printf("not a simple operation");

}

return 0;

}
