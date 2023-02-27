#include <stdio.h>
#include <windows.h>
#include <conio.h>

void sd()
{

    while (1)
    {

        while (1)
        {

            Beep(5000, 2);
            Beep(5000, 2);
            Beep(5000, 2);
            Beep(5000, 2);
            delay(1);
            Beep(5000, 2);
            Beep(5000, 2);
            Beep(5000, 2);
            Beep(5000, 2);
            delay(1);
            if (kbhit())
            {
                return;
            }
        }
    }
}