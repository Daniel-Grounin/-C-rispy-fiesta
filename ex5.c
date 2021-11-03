/*Assignment 1: Author- Daniel Grounin*/
//***program without loops***//
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() { 
    int num, a, b, c, d, e;
    int NotAlternate, Alternate;
    printf("Enter 5 Digit Number.\n");
    scanf("%d", &num);
    if (num >= 10000 && num < 100000) {
        // first we check if it is in our range 
        //the modulu (%) is to take last digit , and the division (/) is for cutting the last digit every time until we get to the first\last digit (depends on the side we want to start cutting).
        a = num % 10;
        b = num / 10 % 10;
        c = num / 100 % 10;
        d = num / 1000 % 10;
        e = num / 10000 % 10;
        if (a % 2 == 0 && b % 2 == 1 && c % 2 == 0 && d % 2 == 1 && e % 2 == 0) {// if 12345 is our the number - 1 is odd , 2 is even , 3 is odd , 4 is even , 5 is odd (alternate pattern).
            printf("alternate!\n");
        }
        else if (a % 2 == 1 && b % 2 == 0 && c % 2 == 1 && d % 2 == 0 && e % 2 == 1) { //in reverse - 2 is even , 3 is odd , 4 is even , 5 is odd , 6 is even (alternate pattern).
            printf("alternate!\n");
        }
        else{
            printf("not alternate!!!!!\n"); // if we dont have pattern like E-O-E-O-E or O-E-O-E-O ,and got something like O-E-E-O-E => it is not going to be alternate !!!!!
        }
    }
    printf("ERROR - not a 5 digits!\n"); //we must have 5 digit to be in our range in first place!

    return 0;
}