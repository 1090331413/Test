#include <stdio.h>

int removeDuplicates(int* nums, int numsSize);

int main()
{
	int nums[] = {1, 1, 2,};
	int numsSize = 2;
	printf("%d",removeDuplicates( nums, numsSize) ); 
	return 0;
}


int removeDuplicates(int* nums, int numsSize)
{
	int *p = (int *)nums;
	int *q = (int *)nums;
	int i, j, size = 0;
	for(i = 0; i<=numsSize; i++, p++)
	{
		for(j = 0; j<=numsSize; j++, q++)
		{
			if(*q != *p)
			{
				nums[size++] = *q;
			}
		}
	}
	printf("%d", size);
	return size;
}
