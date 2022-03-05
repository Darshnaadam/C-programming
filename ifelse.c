#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);

    if (age>=18)
    {
       printf("YOu are an aduld, you can vote !");        
    }
    else if (age>13)
    {
       printf("You're a teenager, you cannot vote");
    }
    else if (age<13)
    {
        printf("You're a kid, you cannot vote");
    }
    
    
    else
    {
       printf("you cannot vote");
    }
    
      
    return(0);
}