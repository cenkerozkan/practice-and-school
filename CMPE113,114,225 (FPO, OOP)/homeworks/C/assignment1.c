/*
github.com/cenkerozkan

Problem:

    Write a C program to calculate the employee's salary according to working hours
    and extra payment method.

    Firstly, ask employees name and surname, then calculate base salary of the employee
    by asking working hours for a week. Calculate base salary for one month. Different
    payments according to working hours are given below:


    Working hour for a week                  Payment for one hour
    _______________________                 ______________________

        More than 45                               100 $

        Between 20 - 45                            75$

        Less than 20                               50$


    After calculating the salary, you need to ask user to select extra payment
    method. If user enters k/k, you need to ask how many km the user comes to work;
    according to this value, you need to increase calculated salary based on given
    percentages.

    If user enters c/C, you need to ask how many children, the user have; according
    to this value you need to increase calculated salary based on given percentages.

    If user enters any other character, then you need to warn the user about not having
    extra payment.


    KM options (k/K)                    Extra payment percentages
    _______________                    ___________________________

    More than 50 km                             %12

    Between 25 - 50                             %8

    Less than 25                                %4




    Number of children (c/C)            Extra payment percentages
    ________________________            _________________________

    More than 4 children                          %15

    Between 2 - 4 children                        %9

    Just 1                                        %5

*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char sName[12]; // Employee's name.
    int iHours;     // Work hours.
    double dSalary; // Salary
    char cExtraPayment; // Extra payment method.


    while (true)
    {
        printf("\nEnter your name and surname:");
        gets(sName);
        printf("\n----------------------------");
        printf("\nEnter the number of hours you are working for a week:  ");
        scanf("%d", &iHours);


        // If user enters a value for work hours below zero.
        if (iHours < 0)
        {
            printf("\nIt seems like you made a mistake.");
        }

        else
        {
            // Payment without bonuses.
            switch (iHours)
            {
                case 0 ... 24 :

                    dSalary = iHours * 50;
                    break;

                case 25 ... 44 :

                    dSalary = iHours * 75;
                    break;

                // A week = 168 hrs.
                case 45 ... 168 :

                    dSalary = iHours * 100;
                    break;

                default : 

                    printf("\nIt is not possible for you to work more than 168 hours in a week but okay.");
                    break;
            }
            
            printf("\nSelect extra payment method. Enter K/k for km, C/c for amount of children:  ");
            scanf(" %c", &cExtraPayment);

            // Kilometers as extra payment option.
            if (cExtraPayment == 'k' || cExtraPayment == 'K')
            {
                int iKilometers;    // Kilometers.

                printf("\nEnter the km that you came to work:  ");
                scanf("%d", &iKilometers);

                // To calculate bonus.
                switch (iKilometers)
                {
                    // Less than 25.
                    case 0 ... 24 :

                        dSalary = (dSalary * 4 / 100) + dSalary;
                        break;

                    // Between 25 - 50.
                    case 25 ... 50 :

                        dSalary = (dSalary * 8 / 100) + dSalary;
                        break;


                    // More than 50.
                    default : 

                        dSalary = (dSalary * 12 / 100) + dSalary;
                        break;
                }

                // Per month.
                dSalary = dSalary * 4;

                printf("\nDear %s, your salary for this month is:  %lf", sName, dSalary);
            }

            // Amount of children for extra payment option.
            else if (cExtraPayment == 'c' || cExtraPayment == 'C')
            {
                int iChildren;

                printf("\nEnter the amount of children:   ");
                scanf("%d", &iChildren);

                // To calculate bonus.
                switch (iChildren)
                {
                    // For only one child.
                    case 1 :

                        dSalary = (dSalary * 5 / 100) + dSalary;
                        break;

                    // Between 2 - 4 children.
                    case 2 ... 4 :

                        dSalary = (dSalary * 9 / 100) + dSalary;
                        break;

                    // More than 4 children.
                    default :

                        dSalary = (dSalary * 15 / 100) + dSalary;
                        break;
                        
                }

                // Calculating monthly.
                dSalary = dSalary * 4;
                printf("\nDear %s, your salary for this month is: %lf", sName, dSalary);
            }

            // If user enters an irrelevant character.
            else
            {
                printf("\nYou will not have any extra payment !\n\nDear %s, your salary for this month is: %lf", sName, dSalary);
            }
            break;
        }
    }
    return 0;
}