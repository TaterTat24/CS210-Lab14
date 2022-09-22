/** lab14functs.h
* ===========================================================
* Name: Benjamin Tat
* Section: T6
* Project: Lab 14
* Purpose: Introduction to Pointers
* ===========================================================
*/
#ifndef LAB14FUNCTS_H
#define LAB14FUNCTS_H

/**
* @brief swapPassByValue will swap the contents of x and y. 
         For example, if x = 5 and y = 10, then by the end 
         of the function, x should contain 10 and y should 
         contain 5.
* @param x an integer value.
* @param y an integer value.
* @return The function will not return a value.
* @pre N/A
* @post N/A
*/
void swapPassByValue(int x, int y);

/**
* @brief swapPassByReference will swap the values stored at 
         ptrX and ptrY. For example, if *ptrX = 5 and *ptrY = 10, 
         then by the end of the function, *ptrX should contain 10 
         and *ptrY should contain 5.
* @param ptrX An integer pointer, ptrX
* @param ptrY An integer pointer, ptrY
* @return The function will not return a value.
* @pre N/A
* @post N/A
*/
void swapPassByReference(int* ptrX, int* ptrY);

/**
* @brief This function should calculate the least number of coins 
         needed to make change for a given number of cents. For 
         example, if given 25 cents, your function should be able 
         to determine that this value can be represented with 1 
         quarter as opposed to 5 nickels, 2 dimes + a nickel, etc.
* @param quartersChange An integer pointer, the number of quarters needed to equal the input value
* @param dimesChange An integer pointer, the number of dimes needed to equal the input value
* @param nickelsChange An integer pointer, the number of nickels needed to equal the input value
* @param penniesChange An integer pointer, the number of pennies needed to equal the input value
* @return makeChange() does not return a value. You will use pointers to store the number of quarters, dimes, nickels, and pennies.
* @pre N/A
* @post N/A
*/
void makeChange(int totalCents, int* quartersChange, int* dimesChange, int* nickelsChange, int* penniesChange);

#endif