//Uppercase character to lowercase character

#include<stdio.h>

int main()

{
    char a,u;

    printf("Enter Uppercase letterm  :\n");
    scanf("%c", &a);

    u=a + 32;
    printf("Lowercase is : %c", u);
    return 0;
}
