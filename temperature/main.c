// temperature

#include<stdio.h>

void main()

{
    float a,c,f;

    printf("Enter the Temperature in celcius :");
    scanf("%f",&c);

    f=1.8*c;
    a=f+32;

    printf("Temperature in fahernheit is %f",a);

}
