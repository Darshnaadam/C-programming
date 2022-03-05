#include <stdio.h>

int main()
{
    int age = 18;
    double gpa = 9.0;
    char grade = 'A';

    printf("age: %p\n gpa: %p\n grade: %p", &age, &gpa, &grade);
    return(0);
}