#include<stdio.h>

main()
{
    int rollno,name,n1,n2,n3,total;

    printf("Enter rollno");
    scanf("%d",rollno);

    printf("Enter mark of 3 sub");
    scanf("%d %d %d",&n1,&n2,&n3);

    total=n1+n2+n3;

    printf("total=%d",total);
}
