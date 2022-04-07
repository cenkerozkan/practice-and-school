#include <stdio.h>

/* 
Problem:

    Input a number from user and then print fibonacci elements
    as much as given number, or given amount. 

    Example: 

        Given number = 10

        Output: 1 1 2 3 5 8 13 21 34 55
*/

int main()
{
    // Input 
    int iUser;
    // Fibonacci
    int iSwap = 0;
    int iSwap2 = 1;

    printf("\nLength\n:   ");
    scanf("%d", &iUser);

    // To start.
    printf("\n%d", iSwap);
    printf("\n%d", iSwap2);

    while (iUser != 2)
    {
        // Fibonacci
        printf("\n%d", (iSwap + iSwap2));
        
        iSwap2 = iSwap + iSwap2;
        iSwap = iSwap2 - iSwap;

        iUser--;
    }
    return 0;
}
