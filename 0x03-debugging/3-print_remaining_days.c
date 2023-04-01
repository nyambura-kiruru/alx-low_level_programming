#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many day are
* left in the year, taking leap year into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
  // Check if the year is a leap year
  if ((year % 4 == 0 && !(year % 100 == 0)) || year % 400 == 0)
  {
    // If it's a leap year and after Feb. 29, increment the day count
    if (month > 2 && day >= 60)
    {
      day++;
    }

    // Print the day of the year and the remaining days in the year
    printf("Day of the year: %d\n", day);
    printf("Remaining days: %d\n", 366 - day);
  }
  else
  {
    // If it's not a leap year, handle Feb. 29 as an invalid date
    if (month == 2 && day == 60)
    {
      printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
    }
    else
    {
      // Print the day of the year and the remaining days in the year
      printf("Day of the year: %d\n", day);
      printf("Remaining days: %d\n", 365 - day);
    }
  }
}
