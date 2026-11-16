#include<stdio.h>

void  main()

{
    int a,b;

    printf("Enter avar:");
    scanf("%d",&a);
    printf("Enter b var:");
    scanf("%d",&b);
    printf("var of a is %d\n",a);
    printf("var of b is %d\n",b);

    a=a+b;
    b=a-b;
    a=a-b;
}
