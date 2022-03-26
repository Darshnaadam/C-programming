#include <stdio.h>

int main()
{
    int d1,m1,y1,d2,m2,y2,r1,r2,r3;

    printf("-----------------------------------------------------------------------\n");
    printf("                          Age calculator                                \n");
    printf("------------------------------------------------------------------------\n");

    printf("Enter your Birth Date\n");
    scanf("%d",&d1);
    printf("Enter your Birth month\n");
    scanf("%d",&m1);
    printf("Enter your Birth Year\n");
    scanf("%d",&y1);
    
    printf("Enter your current Date\n");
    scanf("%d",&d2);
    printf("Enter your current month\n");
    scanf("%d",&m2);
    printf("Enter your current Year\n");
    scanf("%d",&y2);

    if ((d1 > 31 || d1 < 1) || (d2 > 31 || d2 < 1) || (m1 > 12 || m1 < 1) || (m2 > 12 || m2 < 1) || (y1 < 0 
    || y2 < 0))
    {
        printf("Error!, please enter correct Date,month and year");
    }
    else 
    {
        r3 = y2-y1;
        if (d2 >= d1)
        {
            r1 = d2-d1;
        
        }
        else
        {
            m2=m2-1;
            d2=d2+30;
            r1 = d2-d1;
        }
        if (m2 >= m1)
        {
            r2 = m2-m1;
        
        }
        else
        {
            r3 = r3-1;
            m2=m2+12;
            r2 = m2-m1;

            printf("Your age is %d day %d month %d year",r1,r2,r3);
        }

        
    }
   

    return(0);
}