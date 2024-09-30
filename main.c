#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "item.h"

void add_item(Item* item_list, double price, char* sku, char* category, char* name, int index) {
	if (index >= 0 && index < 5) {
		item_list[index].name = (char*)malloc(sizeof(char) * strlen(name));
		item_list[index].sku = (char*)malloc(sizeof(char) * strlen(sku));
		item_list[index].category = (char*)malloc(sizeof(char) * strlen(category));
		item_list[index].price = price;

		strcpy(item_list[index].name, name);
		strcpy(item_list[index].sku, sku);
		strcpy(item_list[index].category, category);
	}
}

void free_items(Item* item_list, int size) {
	if (item_list != NULL) {
		for (int i = 0; i < size; i++) {
			free(item_list[i].name);
			free(item_list[i].sku);
			free(item_list[i].category);
		}
		free(item_list);
	}
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
		printf("###############\n");
		printf("Item Name = %s\n", item_list[i].name);
		printf("Item Price = %.2f\n", item_list[i].price);
		printf("Item SKU = %s\n", item_list[i].sku);
		printf("Item Category = %s\n", item_list[i].category);
	}
}

int main() {
	int num_item = 5;
	Item* item_list = (Item*)malloc(5 * sizeof(Item));

	add_item(item_list, 4.99, "16542", "Breakfast", "Cereal", 0);
	add_item(item_list, 3.99, "18414", "Dairy", "Milk", 1);
	add_item(item_list, 5.99, "68451", "Entertainment", "Trading Card Pack", 2);
	add_item(item_list, 299.99, "48945", "Electronics", "Game Console", 3);
	add_item(item_list, 49.99, "89465", "Clothing", "Jacket", 4);
	
	print_items(item_list, num_item);
	printf("Average Price = %.2f\n", average_price(item_list, num_item));

	free_items(item_list, num_item);

	return 0;
}
