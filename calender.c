#include <stdio.h>

int main() {
    int year, month, daysInMonth, startingDay;

    // get year and month input from user
    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month: ");
    scanf("%d", &month);

    // calculate days in month and starting day
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        daysInMonth = 30;
    } else {
        daysInMonth = 31;
    }

    startingDay = 1;

    // print calendar header
    printf("Sun Mon Tue Wed Thu Fri Sat\n");

    // print blank spaces for days before starting day
    int i;
    for (i = 0; i < startingDay - 1; i++) {
        printf("    ");
    }

    // print days of month
    for (i = 1; i <= daysInMonth; i++) {
        printf("%3d ", i);

        // line break after Saturday
        if ((i + startingDay - 1) % 7 == 0 || i == daysInMonth) {
            printf("\n");
        }
    }

    return 0;
}