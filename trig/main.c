#include<stdio.h>
#include<math.h>

void main()

{
    double a,b;

    printf("Enter the degree :");
    scanf("%1f",&a);

    a=(a*3.14)/180;

    b=cos (a);

    printf("sine is %1f",b);

}
