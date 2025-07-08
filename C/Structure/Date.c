#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
typedef struct Date{
    int day;
    int month;
    int year;
}date;
int main(){
    date today, tomorrow, yesterday;
   
    // Input today's date
    printf("Enter today's date (dd mm yyyy): ");
    scanf("%d %d %d", &today.day, &today.month, &today.year);

    // Input tomorrow's date
    printf("Enter tomorrow's date (dd mm yyyy): ");
    scanf("%d %d %d", &tomorrow.day, &tomorrow.month, &tomorrow.year);

    // Input yesterday's date
    printf("Enter yesterday's date (dd mm yyyy): ");
    scanf("%d %d %d", &yesterday.day, &yesterday.month, &yesterday.year);

    //compare dates
    bool flag = true;
    if (today.year == tomorrow.year && today.month == tomorrow.month && today.day == tomorrow.day) {
        printf("Today and Tomorrow are the same date.\n");
        flag = false;
    }

    if (today.year == yesterday.year && today.month == yesterday.month && today.day == yesterday.day) {
        printf("Today and Yesterday are the same date.\n");
        flag = false;
    }
    if (tomorrow.year == yesterday.year && tomorrow.month == yesterday.month && tomorrow.day == yesterday.day) {
        printf("Tomorrow and Yesterday are the same date.\n");
        flag = false;
    }

    if (flag) {
        printf("All dates are different.\n");
    }
    // Display the dates
    printf("\nToday's date: %02d/%02d/%04d\n", today.day, today.month, today.year);
    printf("Tomorrow's date: %02d/%02d/%04d\n", tomorrow.day, tomorrow.month, tomorrow.year);
    printf("Yesterday's date: %02d/%02d/%04d\n", yesterday.day, yesterday.month, yesterday.year);
    // The %02d format specifier is used to print the day and month with leading zeros if necessary.
    // The %04d format specifier is used to print the year with leading zeros if necessary.

    return 0;

}