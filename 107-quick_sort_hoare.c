#include "sort.h"
/**
  * quick_sort_hoare - quicksort algorithm
  * @array: array to be sorted
  * @size: size of array
  */
void quick_sort_hoare(int *array, size_t size)
{
	sort_alg(array, 0, size - 1, size);
}

/**
  * sort_alg - sorting algorithm
  * @arr: array
  * @left: leftmost index
  * @right: rightmost index
  * @size: size of full array
  */
void sort_alg(int *arr, int left, int right, size_t size)
{
	int pivot;

	if ((right - left) < 2)
		return;
	pivot = split(arr, left, right, size);
	sort_alg(arr, left, pivot, size);
	sort_alg(arr, pivot, right, size);
}

/**
  * split - pivot and split
  * @arr: array
  * @left: leftmost index
  * @right:rightmost index
  * @size: size of full index
  * Return: pivot index
  */
int split(int *arr, int left, int right, size_t size)
{
	int i, i2, pivot, tmp;

	pivot = arr[right];
	i = left;
	i2 = right;

	while (1)
	{
		do i++;
		while (arr[i] < pivot);
		do i2--;
		while (arr[i2] > pivot);
		if (i < i2)
		{
			tmp = arr[i2];
			arr[i2] = arr[i];
			arr[i] = tmp;
			print_array(arr, size);
		}
		else
			return (i2);
	}
}
