/*Assignment 1: Author- Daniel Grounin*/
//***program without loops***//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/* this program calculate the average of Even and Odd numbers */
int main() {
    int n1, n2, n3, n4, n5;;
    float counterOdd = 0, counterEven = 0, sumOdd = 0, sumEven = 0;
    float avgOdd, avgEven;

    printf("Enter 5 integers.\n");
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
    //if number devides by 2 'without a remainder' it is an 'Even number'
    //if number devides by 2 'with a remainder' it is an 'Odd number'
    //the sum counts the Even and the Odd and puts them in different "data boxes" as sum total
    // the counter counts how many times we put even or odd in these boxes

    if (n1 % 2 == 0) {
        sumEven = sumEven + n1;
        ++counterEven;
    }
    else if (n1 % 2 != 0) {
        sumOdd = sumOdd + n1;
        ++counterOdd;
    }
    if (n2 % 2 == 0) {
        sumEven = sumEven + n2;
        ++counterEven;
    }
    else if (n2 % 2 != 0) {
        sumOdd = sumOdd + n2;
        ++counterOdd;
    }
    if (n3 % 2 == 0) {
        sumEven = sumEven + n3;
        ++counterEven;
    }
    else if (n3 % 2 != 0) {
        sumOdd = sumOdd + n3;
        ++counterOdd;
    }
    if (n4 % 2 == 0) {
        sumEven = sumEven + n4;
        ++counterEven;
    }
    else if (n4 % 2 != 0) {
        sumOdd = sumOdd + n4;
        ++counterOdd;
    }
    if (n5 % 2 == 0) {
        sumEven = sumEven + n5;
        ++counterEven;
    }
    else if (n5 % 2 != 0) {
        sumOdd = sumOdd + n5;
        ++counterOdd;
    }
    avgEven = sumEven / counterEven;
    avgOdd = sumOdd / counterOdd;

    printf("%f is an avg of Even numbers.\n", avgEven);
    printf("%f is an avg of Odd numbers.\n", avgOdd);

    return 0;
}
