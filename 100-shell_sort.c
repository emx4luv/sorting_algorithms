#include "sort.h"
/**
  * shell_sort - shell sort, knuth sequence
  * @array: array to be sorted
  * @size: size of array
  */
void shell_sort(int *array, size_t size)
{
	size_t knuth, i, i2;
	int tmp;

	knuth = 1;
	while (knuth < size)
		knuth = (knuth * 3) + 1;
	knuth = (knuth - 1) / 3;
	while (knuth > 0)
	{
		for (i = knuth; i < size; i++)
		{
			tmp = array[i];
			for (i2 = i; i2 >= knuth && array[i2 - knuth] > tmp; i2 -= knuth)
				array[i2] = array[i2 - knuth];
			array[i2] = tmp;
		}
		knuth = (knuth - 1) / 3;
		print_array(array, size);
	}
}
