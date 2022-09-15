#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "Hello";
	char s1[] = "World";
	char s3[12];

	strcpy(s3,s1);
	printf("s3 : %s\n",s3);
	return 0;
}
