#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    char major[50];
    int age;
    float Gpa;
};

int main()
{
    struct student student1;
    student1.age = 22;
    student1.Gpa = 8.3;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "Arts");

    struct student student2;
    student2.age = 22;
    student2.Gpa = 9.0;
    strcpy(student2.name, "Tom");
    strcpy(student2.major, "Arts");
    printf("Result of Jim:\n\n");

    printf("Name = %s\n", student1.name);
    printf("Age = %d\n", student1.age);
    printf("Major = %s\n", student1.major);
    printf("Gpa = %f\n\n", student1.Gpa);

    printf("Result of Tom:\n\n");
    printf("Name = %s\n", student2.name);
    printf("Age = %d\n", student2.age);
    printf("Major = %s\n", student2.major);
    printf("Gpa = %f\n\n", student2.Gpa);
    return (0);
}