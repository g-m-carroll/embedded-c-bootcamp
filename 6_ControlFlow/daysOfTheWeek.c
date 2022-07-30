#include <stdio.h>
#include <stdlib.h>

/* Goals:
- declare an enum that lists all the days of the week
- make sure it has the value 1 on Monday
- print Monday and Sunday values
- get user input and store as a day enum
- print a string with the name of the day
*/

typedef enum {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} WeekDays;

int main()
{
    printf("Monday/Sunday: %d/%d\n", MONDAY, SUNDAY);


    WeekDays day;
    printf("Enter a day of the week: ");
    scanf("%u", &day);

    switch (day)
    {
    case MONDAY:
        printf("Day %d is MONDAY\n", day);
        break;
    case TUESDAY:
        printf("Day %d is TUESDAY\n", day);
        break;
    case WEDNESDAY:
        printf("Day %d is WEDNESDAY\n", day);
        break;
    case THURSDAY:
        printf("Day %d is ThURSDAY\n", day);
        break;
    case FRIDAY:
        printf("Day %d is FRIDAY\n", day);
        break;
    case SATURDAY:
        printf("Day %d is SATURDAY\n", day);
        break;
    case SUNDAY:
        printf("Day %d is SUNDAY\n", day);
        break;
    
    default:
        printf("Day has unknown value\n");
        break;
    }

    EXIT_SUCCESS;    
}
