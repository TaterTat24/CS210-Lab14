/** lab14-02.c
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 14
* Purpose: Introduction to Pointers
* ===========================================================
*/

#include <stdio.h>
#include <math.h>
#include "lab14functs.h"

int main() {
    int totalCents;         // Total amount of change needed
    int quartersChange;     // Number of quarters used for change
    int dimesChange;        // Number of dimes used for change
    int nickelsChange;      // Number of nickels used for change
    int penniesChange;      // Number of pennies used for change

    scanf("%d", &totalCents);

    makeChange(totalCents, &quartersChange, &dimesChange, &nickelsChange, &penniesChange);
    
    return 0;
    
}