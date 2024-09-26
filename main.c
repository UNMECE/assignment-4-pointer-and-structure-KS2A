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

void free_items(Item* item_list, int size) {

}

double average_price(Item* item_list, int size) {
	double avg = 0.0;

		for (int i = 0; i < size; i++) {
			avg += item_list[i].price;
	}
	return avg / size;
}

void print_items(Item* item_list, int size) {
	for (int i = 0; i < size; i++) {
		printf("Item Name = %s\n", item_list[i].name);
		printf("Item Price = %f\n", item_list[i].price);
		printf("Item SKU = %s\n", item_list[i].sku);
		printf("Item Category = %s\n", item_list[i].category);
	}
}

int main() {
	num_item = 5;
	Item* item_list = (Item*)malloc(5 * sizeof(Item));
	



	return 0;
}
