#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "item.h"

void add_item(Item* item_list, double price, char* sku, char* category, char* name, int index) {
	if (index >= 0 && index < 5) {
		item_list[index].name = (char*)malloc(sizeof(char) * strlen(name));
		item_list[index].sku = (char*)malloc(sizeof(char) * strlen(sku));
		item_list[index].category = (char*)malloc(sizeof(char) * strlen(category));
	}
}

void free_items(Item* item_list, int size); {

}

double average_price(Item* item_list, int size); {

}

void print_items(Item* item_list, int size); {

}

int main() {
	num_item = 5;
	Item* item_list = (Item*)malloc(5 * sizeof(Item));
	



	return 0;
}
