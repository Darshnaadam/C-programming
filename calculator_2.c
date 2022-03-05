#include <stdio.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter the number :");
    scanf("%lf", &num1);
    printf("Enter the operator");
    scanf(" %c", &op);
    printf("Enter the number :");
    scanf("%lf", &num2);

    if (op == '+')
    {
        printf("%f", num1 + num2);
    }
    else if (op == '-')
    {
        printf("%f", num1 - num2);
    }
    else if (op == '*')
    {
        printf("%f", num1 * num2);
    }
    else if (op == '/')
    {
        printf("%f", num1 / num2);
    }
    else
    {
        printf(" Invalid operator !!!!");
    }

    return (0);
}