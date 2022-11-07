#ifndef SORT_H
#define SORT_H
/*Includes*/
#include <stdio.h>

/*Structs*/
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*Prototypes*/

void print_list(const listint_t *list);

void print_array(const int *array, size_t size);

void bubble_sort(int *array, size_t size);

void insertion_sort_list(listint_t **list);

void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);

void cocktail_sort_list(listint_t **list);

int split(int *arr, int left, int right, size_t size);

void sort_alg(int *arr, int left, int right, size_t size);

void shell_sort(int *array, size_t size);

void quick_sort_hoare(int *array, size_t size);

void bitonic_sort(int *array, size_t size);

void radix_sort(int *array, size_t size);

void heap_sort(int *array, size_t size);

void merge_sort(int *array, size_t size);

void counting_sort(int *array, size_t size);

#endif
