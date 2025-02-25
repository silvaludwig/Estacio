#include <stdio.h>

int main(){
    int age, registrationNumber, grade = 0;
    char name[20], course[20];

    printf("Student Name: \n");
    scanf(" %s", &name);
    printf("\n");

    printf("Age: \n");
    scanf(" %d", &age);
    printf("\n");

    printf("Registration Number: \n");
    scanf(" %d", &registrationNumber);
    printf("\n");

    printf("Course: \n");
    scanf(" %s", &course);
    printf("\n");

    printf("Student Name: %s, age: %d, Registration Number: %d", name, age, registrationNumber);

    return 0;

}