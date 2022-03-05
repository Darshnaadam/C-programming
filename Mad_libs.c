#include <stdio.h>

int main()
{
    char clour[20];
    char noun[20];
    char celebrity[20];

    printf("Enter a colour :");
    scanf("%s", clour);
    
    printf("Enter a noun :");
    scanf("%s", noun);
    
    printf("Enter a celebrity:");
    scanf("%s", celebrity);

    printf("Roses are %s\n",clour);
    printf("Voilet are %s\n",noun);
    printf("I love %s\n",celebrity);

    return(0);
}