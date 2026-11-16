// Gross salary

#include<stdio.h>

void main()
{
    float agp,b,da,gs;

    printf("Enter the Basic salary :\n");
    scanf("%f",&b);

    printf("Enter the AGP :\n");
    scanf("%f",&agp);

    printf("Enter the DA in percentage :\n");
    scanf("%f",&da);

    gs=(b+agp)*(1+(da/100));

    printf("Gross salary is %f",gs);


}
