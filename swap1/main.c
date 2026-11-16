#include<stdio.h>

void main()

{
    float a,b,t;

    printf("Enter two Numbers");
    scanf("%f %f",&a,&b);

    t=b;
    b=a;
    a=t;

    printf("Swap is %f %f",a,b);

}
