#include <stdio.h>

int main()
{
    float x, y;
    char ch;

    printf("Enter the initial value\n");
    scanf("%f", &x);
    printf("Enter\nc for Credit\nd for Debit\nb for Balance\n\n");
    scanf("\n%c", &ch);

    switch (ch)
    {
    case 'c':
        printf("Enter credit amout:\n");
        scanf("%f", &y);
        x = x + y;
        printf("New amount=%f", x);
        break;

    case 'd':
        printf("Enter debit amount:\n");
        scanf("%f", &y);
        if (x >= y)
        {
            x = x - y;
            printf("New amount=%f", x);
        }

        else
        {
            printf("Error! Insufficient amout in your account");
        }

        break;

    case 'b':

        printf("Balance in your account=%f", x);
        break;

    default:
        printf("Choose correct option for operation");
        break;
    }
    return (0);
}