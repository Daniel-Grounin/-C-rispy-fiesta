/*Assignment 1: Author- Daniel Grounin*/
//***program without loops***//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*This Program can Tell Who Got The Bigger Number After The Decimal Point*/

int main(){
	float num1, num2; 
	printf("Please enter two numbers.\n");
	scanf("%f %f", &num1, &num2);

	if (num1 < 0 || num2 < 0){ // both numbers must be positive!
		printf("ERROR.\n");
	}
	else if ((num1 - (int)num1) > (num2 - (int)num2)){  // who got the bigger remainder?	                                          
		printf("%.2f Have Bigger a Remainder.\n", num1);
	}
	else if ((num1 - (int)num1) < (num2 - (int)num2)){  // same like upper part with difference in the '<' sign
		printf("%.2f Have Bigger a Remainder.\n", num2);
	}
	else  if (num1 = num2){
		printf("Matching Values.\n");//same remainders
	}
	return 0;
}
