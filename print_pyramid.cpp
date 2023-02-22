#include <iostream>
#include "print_pyramid.h"


void print_pyramid(int* arr, int size)
{
	const char* root_lable = " root ";
	const char* left_lable = " left(";
	const char* right_lable = " right(";
	int level = 0;

	for (int i = 2; i < size; i += 3)
	{
		int parent_id = i - 2;
		int left_id = i - 1;
		int rigt_id = i;

		if (parent_id == 0)
		{
			std::cout << parent_id << root_lable << arr[parent_id] << std::endl;
		}

		
	}
}
