#include <stdio.h>
#include <stdlib.h>

/*
Problem:

        Write a C program for sport center that stores 
        information of members and calculates the total time
        that the member stays in the center as MINUTES.
        Added to this, center also stores information 
        of people come to there for registering or staying
        at the cafe.

        For this purpose,

            - Start with getting the number of people 
              in the center. By using loop structure, get 
              the information of these people
            
            - Create 'calcMin()' function and used to 
              return the total time that the member stays
              in the sports center.

            - Check whether the person is a member of the center
              or not. 

                * If yes, get,

                    -- The member id and name of related member.
                    -- Check-in and check-out time of the member.
                    -- Calculate the time as minutes by using 'calcMin()'
                       function. For example, check-in time: 10:33,
                       check-out time: 11:57. The total time that the member
                       stays in the center:
                       11 - 10 = 1 hour, 57-33 = 24 minutes, total(1*60) + 24 = 84 minutes.

                * If no, get, 

                    -- The reason to come the sports center, check two
                       situations, for registering (R or r) or staying at
                       cafe (C or c). Check this situation by using conditional
                       statements and print out the name of this person
                       and reason.

                    -- Otherwise, give a message that "Please enter your choice correctly"

            In the main function,

                You should call 'calcMin()' function and display the total
                time of the member stays in the sports center. 

                You have to use loop to get the values according to the 
                entered number of people (for example n people), for continuing
                to the n times of the program.

*/

// Calculates total time.
int calcMin(int iCheckInH, int iCheckOutH, int iCheckInM, int iCheckOutM)
{
    int iMin1 = iCheckOutH - iCheckInH; // Difference between hours.
    int iMin2 = iCheckOutM - iCheckInM; // Difference between minutes.
    int iTimeSpent = iMin1 + iMin2;     // Total time spent.

    // Total time.
    printf("\nThe total time of the member stays in the sports center is %d minutes.", iTimeSpent + iMin1*60);
    return 0;
}


// Main function
int main()
{
    // Necessary variables 

    int iTotalPpl;  // total number of people
    int iMemId; // ID number of the members.
    char cPersonName[35]; // current person.
    char cMembControl;  // member flag.
    char cPurpose;  // Single char to learn the purpose of the person.
    int iTimeInM;   // Check-in time as minutes.
    int iTimeOutH;  // Check-out time as hours.
    int iTimeInH;   // Check-in time as hours.
    int iTimeOutM;  // Check-out time as hours.


    printf("Enter the number of people in the center:  ");
    scanf("%d", &iTotalPpl);

    while (iTotalPpl != 0)
    {
        // Checking if member or not.
        printf("\nEnter member or not (Y/N):  ");
        scanf(" %c", &cMembControl);

        // If member.
        if (cMembControl == 'Y' || cMembControl == 'y')
        {
            printf("\nMember of the sports center,\nEnter member id:  ");
            scanf("%d", &iMemId);

            printf("\nEnter member name:  ");
            scanf("%s", &cPersonName);

            printf("\nMember of the sports center, %d, %s", iMemId, cPersonName);

            printf("\nEnter the check-in time(HH:MM):");
            scanf("%02d:%02d", &iTimeInH, &iTimeInM);

            printf("\nEnter the check-out time(HH:MM):");
            scanf("%02d:%02d", &iTimeOutH, &iTimeOutM);

            calcMin(iTimeInH, iTimeOutH, iTimeInM, iTimeOutM);
            iTotalPpl--;
        }



        // If not member.
        else if (cMembControl == 'N' || cMembControl == 'n')
        {
            printf("\nEnter the name:");
            scanf("%s", &cPersonName);

            printf("\nEnter the reason to come the sports center\nEnter R or r for registering, C or c for cafe: ");
            scanf(" %c", &cPurpose);

            switch(cPurpose)
            {

                // If register
                case 'R' :

                    // Output
                    printf("\n%s just came to register.", cPersonName);
                    iTotalPpl--;    // To control loop condition
                    break;

                case 'r' :

                    // Output
                    printf("\n%s just came to register.", cPersonName);
                    iTotalPpl--;    // To control loop condition
                    break;


                // If cafe
                case 'C' :

                    // Output
                    printf("\n%s just came to the cafe.", cPersonName);
                    iTotalPpl--;    // To control loop condition
                    break;

                case 'c' :

                    // Output
                    printf("\n%s just came to the cafe.", cPersonName);
                    iTotalPpl--;    // To control loop condition
                    break;

                // Irrelevant
                default :
                    printf("\nPlease enter your choice correctly.");
            }
        }


        // Irrelevant user input.
        else
        {
            printf("\nPlease enter your choice correctly.");
        }
    }
    return 0;
}