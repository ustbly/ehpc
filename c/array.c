#include <stdio.h>

int main()
{
	int arr[6] = {2,43,2,12,45,21};
	int length = sizeof(arr) / sizeof(arr[0]);
	for (int i= 0;i < length;i++)
	{
		printf("arr[%d] = %d\n",i,arr[i]);
	}
	return 0;
}
