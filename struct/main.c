#include<stdio.h>

// define a structure named 'student' with three :'name','age', and 'grade'
struct student {
char name[50];
int age;
float grade;
};

int main() {

// Declare  a variable 'student1' of type 'student'
struct  student student1;

//assign value to the member of 'student1'
printf("Enter student's name:");
scanf("%s", &student1.name);


printf("Enter student's age:");
scanf("%d", &student1.age);


printf("Enter student's grade:");
scanf("%f", &student1.grade);


// print the details of 'studen1'
printf("\nstudent's details:\n");
printf("name: %s\n", student1.name);
printf("age: %d\n", student1.age);
printf("grade: %.2f\n", student1.grade);


return 0;

}

