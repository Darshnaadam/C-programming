#include <stdio.h>

double cube(double num);
int main()
{
    printf("Answer is %f", cube(2.0));
    return(0);
}
double cube(double num)
{
   return num*num*num; 
}