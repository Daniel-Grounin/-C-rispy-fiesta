/*Assignment 1: Author- Daniel Grounin*/
//***program without loops***//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*This program is able to change between Uppercases to Lowercases & vice versa*/

int main(){
	char x;  
	printf("Please enter a latin letter.\n");  
	scanf("%c", &x);                  

	if ((x >= 'a') && (x <= 'z')){             //if the input character is between small 'a' and small 'z' (in the ASCII table) 
		x = x +('A' - 'a');                    // then subtract(-) the distance "32" between the characters in the ASCII table & print UpperCase letter
		printf("%c", x);    
	}
	else if ((x >= 'A') && (x <= 'Z')) {       //if the input character is between BIG 'A' and BIG 'Z' (in the ASCII table)
		x = x  + ('a' - 'A');                    // then add(+) the distance "32" between the characters in the ASCII table & print LowerCase letter
		printf("%c", x);    
	}
	printf("%c", x);  // No funny keys like ~ $ % * ^ ! # & 5 @ ~ , only Latin letters ! 

	return 0;
}
