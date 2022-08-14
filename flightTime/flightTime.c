/*
 * Question:
 *  Write a program that inputs the flight time in seconds, and sends
 *  it to a function that computes and outputs the hours, minutes and
 *  seconds of the flight time.
 *
 * Sample Run:
 *  Enter flight time in seconds: 4215
 *  The flight time is 1 hour 10 minutes and 15 seconds
 * */

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

void flight_time(int *time, int *hour, int *minutes, int *seconds);
int main(void){
    int iTime; // In seconds.
    int iHour, iMinutes, iSeconds;
    printf("Enter the time of flight in seconds: "); scanf("%d", &iTime);
    flight_time(&iTime,&iHour,&iMinutes,&iSeconds);
    printf("Time:\n\t%d Hours\n\t%d Minutes\n\t%d Seconds\n", iHour, iMinutes, iSeconds);
    return 0;

}

void flight_time(int *time, int *hour, int *minutes, int *seconds){
    *hour = *time / 3600;
    *minutes = (*time - (*hour * 3600)) / 60;
    printf("Debug, Time %d\n", *time);
    *seconds = *time % 60;
    return;
}