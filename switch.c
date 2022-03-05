#include <stdio.h>

int main()
{
    char grade;
    
    printf("Enter the grade:");
    scanf(" %c",&grade);

    switch (grade)
    {
    case 'A':
        printf("you did great!");
        break;
     case 'B':
        printf("you did Alright!");
        break;   
    case 'c':
        printf("you did poorly!");
        break;
     case 'D':
        printf("you did very bad!");
        break;
     case 'F':
        printf("you Failed!");
        break;      
    default:
        printf("Invalid grade !!!!!");
        break;
    }
    return(0);
}