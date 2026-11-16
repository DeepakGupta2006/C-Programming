#include<stdio.h>
#include<stdlib.h>

#define SIZE 0x100

void main()

{
    char*ptr=malloc(SIZE);

    snprintf(ptr,SIZE,"date:%s","DEEPAK");
    printf("%s",ptr);
}

