#include<stdio.h>



int compare(int n1,int n2)
{
	if(n1 > n2) 
	{
		return n1;
	}else {
		return n2;
	}
}
int main()
{
	int a = 10;
	int b = 20;
	int max = compare(a,b);
	printf("max = %d\n",max);
	return 0;
}
