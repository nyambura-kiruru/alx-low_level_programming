#include <stdio.h> // include standard input and output library
#include "main.h" // include header file main.h

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void) // main function
{
    int month; // declare integer variable named month
    int day; // declare integer variable named day
    int year; // declare integer variable named year

    month = 4; // assign value 4 to month variable
    day = 01; // assign value 1 to day variable
    year = 1997; // assign value 1997 to year variable

    printf("Date: %02d/%02d/%04d\n", month, day, year); // print the date in specified format

    day = convert_day(month, day); // call function convert_day() and assign its return value to day variable

    print_remaining_days(month, day, year); // call function print_remaining_days() with provided arguments

    return (0); // exit the main function with return value 0
}
