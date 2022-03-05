#include <stdio.h>

int main()
{
    sayhi ("tom", 21);
    sayhi ("harry style", 30);
    sayhi ("Noha centanio", 27);
    return(0);
}

void sayhi (char name[], int age )
{
    printf("Hello %s, you are %d\n", name, age);
}