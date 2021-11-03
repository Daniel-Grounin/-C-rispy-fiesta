/*Assignment 1: Author- Daniel Grounin*/
//***program without loops***//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*this program is for store with only 3 items*/
int main(){
	int items;
	float price1, price2, price3;
	printf("Please select up to 3 items:\n1 item - no discount.\n2 items - get 30%% discount on cheap item.\n3 items - get 50%% discount(lowest price item) + 20%% discount(second lowest item).\n");
	printf("so, How much items ?\n");
	scanf(" %d ", &items); // decide how many items (1-2-3)

	switch (items){
	case 1: printf("enter price for 1 item .\n");       // for 1 item the program charge full price

		scanf(" %f ", &price1);
		printf("that will be %f shekels.\n", price1);
		break;

	case 2: printf("please enter price for 2 items each.\n");   // for 2 items this case gives 30% discount on lower price item , second item no change

		scanf("%f%f", &price1, &price2);
		if (price1 > price2)
			printf("the cheaper item is on 30%% discount -> %f .\nand the other one with no change %f.\n ", price2 * 0.7, price1);
		else if (price1 < price2)
			printf("the cheaper item is on 30%% discount -> %f .\nand the other one with no change %f.\n ", price1 * 0.7, price2);
		break;

	case 3:  printf("please enter price for 3 items each.\n");         //the case gives 50% discount on lowest price between 3 items , 20% discount on second lower item & last item with no change

			scanf("%f%f%f", &price1, &price2, &price3);
		if (price1 > price2 && price2 > price3)
			printf("lowest price item is now 50%% off %f .\nthe second item with 30%% is now %f.\nand item 3 with no change %f.\n ", price2 * 0.8, price1 * 0.5, price3);
		else if (price2 > price1 && price3 > price2)
			printf("lowest price item is now 50%% off %f .\nthe second item with 30%% is now %f.\nand item 3 with no change %f.\n ", price1 * 0.8, price2 * 0.5, price3);
		else if (price2 > price3 && price3 > price1)
			printf("lowest price item is now 50%% off %f .\nthe second item with 30%% is now %f.\nand item 3 with no change %f.\n ", price3 * 0.8, price1 * 0.5, price2);
		else if (price3 > price1 && price1 > price2)
			printf("lowest price item is now 50%% off %f .\nthe second item with 30%% is now %f.\nand item 3 with no change %f.\n ", price1 * 0.8, price3 * 0.5, price2);
		else if (price3 > price1 && price1 > price2)
			printf("lowest price item is now 50%% off %f .\nthe second item with 30%% is now %f.\nand item 3 with no change %f.\n ", price2 * 0.8, price1 * 0.5, price3);
		else if (price3 > price2 && price1 < price2)
			printf("lowest price item is now 50%% off %f .\nthe second item with 30%% is now %f.\nand item 3 with no change %f.\n ", price1 * 0.8, price2 * 0.5, price3);
		break;

		default: printf("ERROR.\n");
		break;
	}

	return 0;
}
