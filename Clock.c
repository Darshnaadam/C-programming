#include <stdio.h>
#include <windows.h>

int main()
{
    int h, m, s;
    int delay = 1000; // it delays the time by 1000 millisecond and use this in funtion sleep

    printf("Enter the time: \n");
    scanf("\n%d,%d,%d", &h, &m, &s);

    if (h > 12 || m > 60 || s > 60)
    {
        printf("Error!\n");
        exit(0);
    }
    while (1) // it is an infinite loop whatever in it will be repeat itself
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            h = 0;
        }
        if (h > 12)
        {
            h = 1;
        }
        printf("\n Clock:");
        printf("\n %02d:%02d:%02d", h, m, s); // this write our code in format of (00:00:00)
        Sleep(delay);                         // this funtion slows down the while loop and make it more like real clock
        system("cls");                        // this clears the screen
    }

    return (0);
}