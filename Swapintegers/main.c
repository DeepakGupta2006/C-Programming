#include<stdio.h>
int main()
{
    int num1=5, num2=10;

    printf("The numbers are: %d and  %d", &num1, &num2);

   num1=num1+num2;
   num2=num1-num2;
   num1=num2-num1;

    printf("The number have been swapped with new position : %d and %d", &num1,&num2);

    return 0;
}
