#include <stdio.h>

int main()
{
	int a = 10;
	int* p = &a;
	printf("p:%p\n",p);
	printf("*p:%d\n",*p);
	printf("&a:%p\n",&a);
	return 0;
}
