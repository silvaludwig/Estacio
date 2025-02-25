#include <stdio.h>

int main(){
    char name[20];
    char gender;
    float height;
    int age;

    printf("Name: \n"); //prints "name: " informing the user the data to be collected
    scanf(" %s", &name); //collect data from user and store it in variable name
    printf("Name: %s\n", name, "\n"); //prints the variable name
    printf("\n");

    printf("Gender: \n");
    scanf(" %c", &gender);
    printf("Gender: %c\n", gender, "\n");
    printf("\n");

    printf("Height: \n");
    scanf(" %f", &height);
    printf("Height: %f\n", height, "\n");
    printf("\n");

    printf("Age: \n");
    scanf(" %d", &age);
    printf("Gender: %d\n", age, "\n");
    printf("\n");

    printf("Your name is %s", name); 
    printf(", you have %d", age);
    printf("years old. \n");
}